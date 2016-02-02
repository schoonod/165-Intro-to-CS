//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/
#include "LibraryItem.hpp"

/***********************************************************************************
 ** Description: LibraryItem constructor.  Creates a new LibraryItem with a title
 and unique idCode, and an initial location of ON_SHELF
 ***********************************************************************************/
LibraryItem::LibraryItem (string idCode, string title){
    setIdCode(idCode);
    setTitle(title);
    this->checkedOutBy = NULL;
    this->requestedBy = NULL;
    this->location = Locale(ON_SHELF);
}
/***********************************************************************************
 ** Description: Changes the idCode
 ***********************************************************************************/
void LibraryItem::setIdCode(string idCode){
    this->idCode = idCode;
}
/***********************************************************************************
 ** Description: Changes the title
 ***********************************************************************************/
void LibraryItem::setTitle(string title){
    this->title = title;
}
/***********************************************************************************
 ** Description: Accesses and returns idCode
 ***********************************************************************************/
string LibraryItem::getIdCode(){
    return this->idCode;
}
/***********************************************************************************
 ** Description: Accesses and returns title
 ***********************************************************************************/
string LibraryItem::getTitle(){
    return this->title;
}
/***********************************************************************************
 ** Description: Accesses and returns location element from ENUM Locale
 ***********************************************************************************/
Locale LibraryItem::getLocation(){
    return this->location;
}
/***********************************************************************************
 ** Description: Changes location of LibraryItem
 ***********************************************************************************/
void LibraryItem::setLocation(Locale location){
    this->location = location;
}
/***********************************************************************************
 ** Description: Accesses and returns Patron who checked out the LibraryItem
 ***********************************************************************************/
Patron* LibraryItem::getCheckedOutBy(){
    return this->checkedOutBy;
}
/***********************************************************************************
 ** Description: Changes checkedOutBy data member of pointer to type Patron
 ***********************************************************************************/
void LibraryItem::setCheckedOutBy(Patron* checkedOutBy){
    this->checkedOutBy = checkedOutBy;
}
/***********************************************************************************
 ** Description:Accesses and returns Patron who requested the LibraryItem
 ***********************************************************************************/
Patron* LibraryItem::getRequestedBy(){
    return this->requestedBy;
}
/***********************************************************************************
 ** Description: Changes requestedBy data member of pointer to type Patron
 ***********************************************************************************/
void LibraryItem::setRequestedBy(Patron* requestedBy){
    this->requestedBy = requestedBy;
}
/***********************************************************************************
 ** Description: Accesses and returns dateCheckedOut
 ***********************************************************************************/
int LibraryItem::getDateCheckedOut(){
    return this->dateCheckedOut;
}
/***********************************************************************************
 ** Description: Changes dateCheckedOut to current library date
 ***********************************************************************************/
void LibraryItem::setDateCheckedOut(int currentDate){
    this->dateCheckedOut = currentDate;
}