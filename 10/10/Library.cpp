//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/

#include "Library.hpp"
/***********************************************************************************
 ** Description: Library default constructor
 ***********************************************************************************/
Library::Library(){
    this->currentDate = 0; // 0 days since creation of Library object
}
/***********************************************************************************
 ** Description: Change library holdings by adding a LibraryItem
 ***********************************************************************************/
void Library::addLibraryItem(LibraryItem* holding){
    this->holdings.push_back(holding);
}

/***********************************************************************************
 ** Description: Change Library members by adding a Patron
 ***********************************************************************************/
void Library::addPatron(Patron* member){
    this->members.push_back(member);
}
/***********************************************************************************
 ** Description: Access and return Patron or NULL if DNE
 ***********************************************************************************/
Patron* Library::getPatron (string patronID){
    
    for (int i = 0; i < members.size(); i++){
        
        if (members[i]->getIdNum() == patronID)
            return members[i];
    }
    return NULL;
}
// getPatron - returns a pointer to the Patron corresponding to the ID parameter, or NULL if no such Patron is a member
/***********************************************************************************
 ** Description: Access and return LibraryItem or NULL if DNE
 ***********************************************************************************/
LibraryItem* Library::getLibraryItem (string ItemID){
    
    for (int i = 0; i < holdings.size(); i++){
        
        if (holdings[i]->getIdCode() == ItemID)
            return holdings[i];
    }
    return NULL;
}
/***********************************************************************************
 ** Description: Assigns a LibraryItem to a Patron's checkedOutItems
 ***********************************************************************************/
string Library::checkOutLibraryItem(string patronID, string ItemID){
    
    for (int i = 0; i < members.size(); i++){
        // Find Patron
        if (members[i]->getIdNum() == patronID){
           
            for (int j = 0; j < holdings.size(); j++){
                
                // Patron found, find Item
                if (holdings[j]->getIdCode() == ItemID){
                    
                    // Item found, find if CHECKED_OUT
                    if(holdings[j]->getLocation() == CHECKED_OUT)
                        return "item already checked out";
                   
                    // Item not checked out, find if ON_HOLD_SHELF and requestedBy other Patron
                    else if ((holdings[j]->getLocation() == ON_HOLD_SHELF) && (holdings[j]->getRequestedBy() != members[i]))
                        return "item on hold by other patron";
                    
                    // Item found, and is either on ON_HOLD_SHELF for the current Patron, or it's ON_SHELF
                    else{
                        // Set checkedOutBy to current Patron
                        holdings[j]->setCheckedOutBy(members[i]);
                        
                        // Set dateCheckedOut to current date, check to make sure this->currentDate works
                        holdings[j]->setDateCheckedOut(currentDate);
                        
                        // Set Locale to CHECKED_OUT
                        holdings[j]->setLocation(CHECKED_OUT);
                        
                        // Update Patron's checked out items;
                        members[i]->addLibraryItem(holdings[j]);
                        
                        // Update requestedBy
                        if (holdings[j]->getRequestedBy())
                            holdings[j]->setRequestedBy(NULL);
                        
                        return "check out successful";
                    }
                }
            }
            // Item not found if loop reaches this point
            cout << "item not found" << endl;

            return "item not found";
        }
    }
    // Patron not found if loop reaches this point
    return "patron not found";
}
/***********************************************************************************
 ** Description: Removes a LibraryItem from a Patron's Library checkedOutItems
 ***********************************************************************************/
string Library::returnLibraryItem(string ItemID){
    for (int i = 0; i < holdings.size(); i++){
        
        // Find Item
        if (holdings[i]->getIdCode() == ItemID){
        
            // Item found, find if not checked out
            if(holdings[i]->getLocation() != CHECKED_OUT){
                return "item already in library";
            }

            else {

                // Update Patron's checked out items
                holdings[i]->getCheckedOutBy()->removeLibraryItem(holdings[i]);
            
                // Update LibraryItem's checkedOutBy
                holdings[i]->setCheckedOutBy(NULL);
                
                // Update LibraryItem's location
                if (holdings[i]->getRequestedBy())
                    holdings[i]->setLocation(ON_HOLD_SHELF);
               
                else
                    holdings[i]->setLocation(ON_SHELF);
                return "return successful";
            }
        }
    }
    // Item not found if loop reaches this point
    return "item not found";
}
/***********************************************************************************
 ** Description: Requests a LibraryItem for hold for a Patron
 ***********************************************************************************/
string Library::requestLibraryItem(string patronID, string ItemID){
   
    // Patron loop
    for (int i = 0; i < members.size(); i++){
        // Find Patron
        if (members[i]->getIdNum() == patronID){
        //Patron found
            
            // Item loop
            for (int j = 0; j < holdings.size(); j++){
        
                // Find Item
                if (holdings[j]->getIdCode() == ItemID){
                // Item found
                    
                    // Find if item is on request
                    if (holdings[j]->getRequestedBy()){
                        return "item on hold by other patron";
                    }
                    
                    else {
                        holdings[j]->setRequestedBy(members[i]);
                        
                        if (holdings[j]->getLocation() == ON_SHELF)
                            holdings[j]->setLocation(ON_HOLD_SHELF);
                        
                        return "request successful";
                        
                    }
                }
            }
            // Item not found if loop reaches this point
            return "item not found";
        }
    }
    // Patron not found if loop reaches this point
    return "patron not found";
}

/***********************************************************************************
 ** Description:
 ***********************************************************************************/
string Library::payFine(std::string patronID, double payment){
    for (int i = 0; i < members.size(); i++){
        // Find Patron
        if (members[i]->getIdNum() == patronID){
            members[i]->amendFine(-payment);
            return "payment successful";
        }
    }
    // Patron not found if loop reaches this point
    return "patron not found";
}

/***********************************************************************************
 ** Description: Increments Library currentDate and calculates member fines
 ***********************************************************************************/
void Library::incrementCurrentDate(){
    this->currentDate++;
    // loop thru each member
    for (int i = 0; i < members.size(); i++){

        // loop thru each member items
        for (int j = 0; j < members[i]->getCheckedOutItems().size(); j++){
            
            //getCheckOutLength
            if (members[i]->getCheckedOutItems().at(j)->getCheckOutLength() == 21){
                if (currentDate - holdings[j]->getDateCheckedOut() > 21){
                    members[i]->amendFine(.1);
                }
            }
            
            else if (members[i]->getCheckedOutItems().at(j)->getCheckOutLength() == 14){
                if (currentDate - holdings[j]->getDateCheckedOut() > 14) {
                    members[i]->amendFine(.1);
                }
            }
            
            else if (members[i]->getCheckedOutItems().at(j)->getCheckOutLength() == 7){
                if (currentDate - holdings[j]->getDateCheckedOut() >7){
                    members[i]->amendFine(.1);
                }
            }
        }
    }
}