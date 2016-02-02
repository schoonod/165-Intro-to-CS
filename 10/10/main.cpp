//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10
 **********************************************************************************/
#include <iostream>
#include "Library.hpp"



int main(){
    
    Book b1("123", "War and Peace", "Tolstoy");
    Album a2("234", "Gyotaku", "GO!GO!7188");
    Patron p1("abc", "Felicity");
    Patron p2("bcd", "Waldo");

    
    Library lib;
    lib.addLibraryItem(&b1);
    lib.addLibraryItem(&a2);
    lib.addPatron(&p1);
    lib.addPatron(&p2);
    
    lib.checkOutLibraryItem("abc", "123");
    lib.checkOutLibraryItem("bcd", "234");
    
    //cout << lib.getLibraryItem("234")->getLocation() << endl;
    
    lib.requestLibraryItem("bcd", "234");
    //cout << lib.getLibraryItem("234")->getLocation() << endl;
    
   // lib.returnLibraryItem("234");
   // cout << lib.getLibraryItem("234")->getLocation() << endl;
    
    
    
    //cout << p1.getFineAmount() << endl;
    cout << p2.getFineAmount() << endl;

    for (int i=0; i<21; i++)
        lib.incrementCurrentDate();
    //cout << p1.getFineAmount() << endl;
    cout << p2.getFineAmount() << endl;
    
   
   
    return 0;
}

/*
Test:
            Library Item
 LibraryItem(std::string idc, std::string t);
 getIdCode();
 string getTitle();
 void setIdCode(string);
 void setTitle(string);
 Locale getLocation();
 void setLocation(Locale);
 Patron* getCheckedOutBy();
 void setCheckedOutBy(Patron*);
 Patron* getRequestedBy();
 void setRequestedBy(Patron*);
 int getDateCheckedOut();
 void setDateCheckedOut(int);
 
 
 You will be writing a Library simulator involving multiple classes.  To make things a little simpler for you, I am supplying you with LibraryItem.hpp, Patron.hpp and Library.hpp. You will write the implementation files for the LibraryItem, Patron and Library classes, and the header and implementation files for three classes that inherit from LibraryItem (Book, Album and Movie). You may add one-line "inline function" implementations to the .hpp files if you want, but implementation of the other functions should go in the corresponding .cpp files. Please put your function comments in the .cpp files (they would clutter up the .hpp files).
 
 A couple of notes:
 The vector::erase() function lets you delete an element of a vector, shifting over all the elements after it.
 You'll see in LibraryItem.hpp a line that says "class Patron;".  That is a forward declaration.  It doesn't say anything about the definition of the Paton class, but it promises the compiler that there will be a type named Patron.  The reason we don't just say "#include Patron.hpp" is that both LibraryItem and Patron need to know about each other, but they can't both #include the other because that would create a cyclic dependency.
 
 Here are the .hpp files: LibraryItem.hppView in a new window, Patron.hppView in a new window and Library.hppView in a new window
 
 Here are descriptions of the three classes:
 
 Library Item:
 idCode - a unique identifier for a LibraryItem
 title - cannot be assumed to be unique
 location - a LibraryItem can be either on the shelf, on the hold shelf, or checked out
 checkedOutBy - pointer to the Patron who has it checked out (if any)
 requestedBy - pointer to the Patron who has requested it (if any); a LibraryItem can only be requested by one Patron at a time
 dateCheckedOut - when a LibraryItem is checked out, this will be set to the currentDate of the Library
 constructor - takes an idCode, and title; checkedOutBy and requestedBy should be initialized to NULL; a new LibraryItem should be on the shelf
 some get and set methods
 
 
 Book/Album/Movie:
 
 These three classes all inherit from LibraryItem.
 All three will need a public static const int CHECK_OUT_LENGTH.  For a Book it's 21 days, for an Album it's 14 days, and for a Movie it's 7 days.
 All three will have an additional field.  For Book, it's a string field called author.  For Album, it's a string field called artist.  For Movie, it's a string field called director.  There will also need to be get methods to return the values of these fields.
 
 
 Patron:
 idNum - a unique identifier for a Patron
 name - cannot be assumed to be unique
 checkedOutItems - a vector of LibraryItems that a Patron currently has checked out
 fineAmount - how much the Patron owes the Library in late fines
 constructor - takes an idNum and name
 some get and set methods
 addLibraryItem - adds the specified LibraryItem to checkedOutItems
 removeLibraryItem - removes the specified LibraryItem from checkedOutItems
 amendFine - a positive argument increases the fineAmount, a negative one decreases it; this is allowed to go negative
 
 Library:
 holdings - a vector of pointers to LibraryItems in the Library
 members - a vector of pointers to Patrons in the Library
 currentDate - stores the current date represented as an integer number of "days" since the Library object was created
 a constructor that initializes the currentDate to zero
 addLibraryItem - adds the parameter to holdings
 addPatron - adds the parameter to members
 getLibraryItem - returns a pointer to the LibraryItem corresponding to the ID parameter, or NULL if no such LibraryItem is in the holdings
 getPatron - returns a pointer to the Patron corresponding to the ID parameter, or NULL if no such Patron is a member
 
 checkOutLibraryItem
 if the specified LibraryItem is not in the Library, return "item not found"
 if the specified Patron is not in the Library, return "patron not found"
 if the specified LibraryItem is already checked out, return "item already checked out"
 if the specified LibraryItem is on hold by another Patron, return "item on hold by other patron"
 otherwise update the LibraryItem's checkedOutBy, dateCheckedOut and Location; if the LibraryItem was on hold for this Patron, update requestedBy; update the Patron's checkedOutItems; return "check out successful"
 
 returnLibraryItem
 if the specified LibraryItem is not in the Library, return "item not found"
 if the LibraryItem is not checked out, return "item already in library"
 otherwise update the Patron's checkedOutItems; update the LibraryItem's location depending on whether another Patron has requested it; update the LibraryItem's checkedOutBy; return "return successful"
 
 requestLibraryItem
 if the specified LibraryItem is not in the Library, return "item not found"
 if the specified Patron is not in the Library, return "patron not found"
 if the specified LibraryItem is already requested by another Patron, return "item on hold by other patron"
 otherwise update the LibraryItem's requestedBy; if the LibraryItem is on the shelf, update its location to on hold; return "request successful"

 payFine
 if the specified Patron is not in the Library, return "patron not found"
 use amendFine to update the Patron's fine; return "payment successful"
 
 incrementCurrentDate
 increment current date; increase each Patron's fines by 10 cents for each overdue LibraryItem they have checked out (using amendFine)
 be careful - a LibraryItem can be on request without its location being the hold shelf (if another Patron has it checked out);
 
 
 You must submit on TEACH: the three provided .hpp files, LibraryItem.cpp, Book.hpp, Book.cpp, Album.hpp, Album.cpp, Movie.hpp, Movie.cpp, Patron.cpp, and Library.cpp.  Zip the 12 files together for submission.  The extension must be .zip.
 
 Automated test file: The test script for this week is hereView in a new window.  The main method for testing your classes is hereView in a new window.
 
 Just to think about: There are six possible changes in the location of a LibraryItem.  Can all six occur?
 
 There are a lot of details here - it's entirely possible I omitted something or mis-stated something. If you think that is the case, I encourage you to ask me about it.
 

 
*/