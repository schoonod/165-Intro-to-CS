//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/
#ifndef PATRON_HPP
#define PATRON_HPP

#include <string>
#include <vector>
#include "LibraryItem.hpp"


class Patron
{
private:
    string idNum;
    string name;
    vector<LibraryItem*> checkedOutItems;
    double fineAmount;
public:
    Patron(string idn, string n);
    void setIdNum(string);
    void setName(string);
    string getIdNum();
    string getName();
    vector<LibraryItem*> getCheckedOutItems();
    void addLibraryItem(LibraryItem*);
    void removeLibraryItem(LibraryItem*);
    double getFineAmount();
    void amendFine(double amount);
};

#endif