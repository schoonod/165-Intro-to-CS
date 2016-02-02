//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/
#ifndef LIBRARY_ITEM_HPP
#define LIBRARY_ITEM_HPP

#include <string>
#include <iostream>
using namespace std;


class Patron;

enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};


class LibraryItem
{
protected:
    std::string idCode;
    std::string title;
    Locale location;
    Patron* checkedOutBy;
    Patron* requestedBy;
    int dateCheckedOut;     
public:
    LibraryItem(std::string idc, std::string t);
    std::string getIdCode();
    std::string getTitle();
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
    virtual int getCheckOutLength() = 0;
};

#endif