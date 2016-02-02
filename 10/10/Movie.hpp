//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/
#ifndef MOVIE_HPP
#define MOVIE_HPP
#include "LibraryItem.hpp"


class Movie : public LibraryItem
{
private:
    string director;
    
public:
    static const int CHECK_OUT_LENGTH = 7;
    Movie(string, string, string);
    void setDirector(string);
    string getDirector();
    int getCheckOutLength();
};

#endif 
