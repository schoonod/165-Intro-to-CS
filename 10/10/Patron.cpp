//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/
#include "Patron.hpp"
#include <vector>
#include <iostream>

/***********************************************************************************
 ** Description: Patron Constructor
 ***********************************************************************************/
Patron::Patron(string idNum, string name){
    setIdNum(idNum);
    setName(name);
    fineAmount = 0;
}

/***********************************************************************************
 ** Description: Changes idNum
 ***********************************************************************************/
void Patron::setIdNum(string idNum){
    this->idNum = idNum;
}

/***********************************************************************************
 ** Description: Changes name
 ***********************************************************************************/
void Patron::setName(string name){
    this->name = name;
}

/***********************************************************************************
 ** Description: Accesses and returns idNum
 ***********************************************************************************/
string Patron::getIdNum(){
    return this->idNum;
}

/***********************************************************************************
 ** Description: Accesses and returns name
 ***********************************************************************************/
string Patron::getName(){
    return this->name;
}

/***********************************************************************************
 ** Description: Accesses and returns items checked out by Patron
 ***********************************************************************************/
vector<LibraryItem*> Patron::getCheckedOutItems(){
    return this->checkedOutItems;
}

/***********************************************************************************
 ** Description: Changes library holdings of Patron by adding
 ***********************************************************************************/
void Patron::addLibraryItem(LibraryItem* book){
    checkedOutItems.push_back(book);
}

/***********************************************************************************
 ** Description: Changes library holdings of Patron by removing
 ***********************************************************************************/
void Patron::removeLibraryItem(LibraryItem* item){
    
    vector<LibraryItem*>::iterator iter = checkedOutItems.begin();
    
    for (int i = 0; i < checkedOutItems.size(); i++){
        if (checkedOutItems[i] == item)
            checkedOutItems.erase(iter);
        else
            iter++;
    }
}

/***********************************************************************************
 ** Description: Access and return current fines
 ***********************************************************************************/
double Patron::getFineAmount(){
    return this->fineAmount;
}

/***********************************************************************************
 ** Description: Change current fines
 ***********************************************************************************/
void Patron::amendFine(double amount){
     this->fineAmount += amount;
}





