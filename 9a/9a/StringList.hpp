//  Project 9a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/28/2015
 ** Description:PROJECT 9a is a simple linked list.
 **********************************************************************************/
#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class StringList {
private:
    struct ListNode {
        string value;
        ListNode *next;
        ListNode();
        ListNode(string, ListNode *);
    };
    ListNode *head;

public:
    StringList();
    StringList(const StringList &);       // copy constructor
    void add(string);
    int positionOf(string);
    bool setNodeVal(int, string);
    vector<string> getAsVector();
    ~StringList();                      // destructor
    void display();
    void printVect(vector<string>);
    void printPos(string);
    
};

#endif 