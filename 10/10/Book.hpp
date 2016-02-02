//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/
#ifndef BOOK_HPP
#define BOOK_HPP
#include "LibraryItem.hpp"


class Book : public LibraryItem
{
private:
    string author;
    
public:
    static const int CHECK_OUT_LENGTH = 21;
    Book(string, string, string);
    void setAuthor(string);
    string getAuthor();
    int getCheckOutLength();
};

#endif
