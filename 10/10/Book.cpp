//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/
#include "Book.hpp"

/***********************************************************************************
 ** Description: Book constructor
 ***********************************************************************************/
Book::Book(string idCode, string title, string author) : LibraryItem(idCode, title){
    setAuthor(author);
}

/***********************************************************************************
 ** Description: Changes author
 ***********************************************************************************/
void Book::setAuthor(string author){
    this->author = author;
}

/***********************************************************************************
 ** Description: Accesses and returns author
 ***********************************************************************************/
string Book::getAuthor(){
    return this->author;
}

/***********************************************************************************
 ** Description: Accesses and returns CHECK_OUT_LENGTH
 ***********************************************************************************/
int Book::getCheckOutLength(){
    return this->CHECK_OUT_LENGTH;
}