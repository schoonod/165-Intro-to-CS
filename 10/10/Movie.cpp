//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/
#include "Movie.hpp"

/***********************************************************************************
 ** Description: Movie constructor
 ***********************************************************************************/
Movie::Movie(string idCode, string title, string director) : LibraryItem(idCode, title){
    setDirector(director);
}

/***********************************************************************************
 ** Description: Changes director
 ***********************************************************************************/
void Movie::setDirector(string director){
    this->director = director;
}

/***********************************************************************************
 ** Description: Accesses and returns
 ***********************************************************************************/
string Movie::getDirector(){
    return this->director;
}

/***********************************************************************************
 ** Description: Accesses and returns CHECK_OUT_LENGTH
 ***********************************************************************************/
int Movie::getCheckOutLength(){
    return this->CHECK_OUT_LENGTH;
}