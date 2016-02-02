//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/
#include "Album.hpp"

/***********************************************************************************
 ** Description: Album constructor
 ***********************************************************************************/
Album::Album(string idCode, string title, string artist) : LibraryItem(idCode, title){
    setArtist(artist);
}

/***********************************************************************************
 ** Description: Changes artist
 ***********************************************************************************/
void Album::setArtist(string artist){
    this->artist = artist;
}

/***********************************************************************************
 ** Description: Accesses and returns artist
 ***********************************************************************************/
string Album::getArtist(){
    return this->artist;
}

/***********************************************************************************
 ** Description: Accesses and returns CHECK_OUT_LENGTH
 ***********************************************************************************/
int Album::getCheckOutLength(){
    return this->CHECK_OUT_LENGTH;
}