//  Project 10, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 6/1/2015
 ** Description:PROJECT 10 creates a library checkout system that can add patrons,
 albums, movies, and books, and keep track of overdue books and fines.
 **********************************************************************************/
#ifndef ALBUM_HPP
#define ALBUM_HPP
#include "LibraryItem.hpp"


class Album : public LibraryItem
{
private:
    string artist;
    
public:
    static const int CHECK_OUT_LENGTH = 14;
    Album(string, string, string);
    void setArtist(string);
    string getArtist();
    int getCheckOutLength();
};

#endif