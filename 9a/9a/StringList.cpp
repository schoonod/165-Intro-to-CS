//  Project 9a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/28/2015
 ** Description:PROJECT 9a is a simple linked list.
 **********************************************************************************/
#include "StringList.hpp"

/***********************************************************************************
 ** Description: StringList default constructor
 ***********************************************************************************/
StringList::StringList(){
    this->head = new ListNode;
}
/***********************************************************************************
 ** Description: ListNode default constructor
 ***********************************************************************************/
StringList::ListNode::ListNode(){
    this->value = "";
    this->next = 0;
}
/***********************************************************************************
 ** Description: ListNode constructor
 ***********************************************************************************/
StringList::ListNode::ListNode(string value1, ListNode *next1 = 0){
    value = value1;
    next = next1;
}
/***********************************************************************************
 ** Description: StringList copy constructor
 ***********************************************************************************/
StringList::StringList(const StringList &obj){
    this->head = new ListNode;
    *this->head = *obj.head;
    
    // The new object ListNode pointer (newPtr) is assigned it's head pointer
    ListNode *newPtr = this->head;
    
    // The existing object ListNode pointer (nodePtr), is assigned it's head pointer
    ListNode *nodePtr = obj.head;
    
    // While the next node in the existing object has a value (since the head already does
    // b/c of the constructor); nodePtr is stepped during each loop
    while (nodePtr->next != NULL){
       
        // Create the new object node
        newPtr->next = new ListNode();
        // Copy the existing object's contents into the contents of the new node
        *newPtr->next = *nodePtr->next;
        // Step the new object to the next node
        newPtr = newPtr->next;
        // Step the existing object to the next node
        nodePtr = nodePtr->next;
    }
}
/***********************************************************************************
 ** Description: Adds node to end of list.
 ***********************************************************************************/
void StringList::add(string str){
    if (head->value == ""){
        head = new ListNode(str);
    }
    else {
        ListNode *nodePtr = head;
        
        while (nodePtr->next != NULL){
            nodePtr = nodePtr->next;
        }
        
        nodePtr->next = new ListNode(str);
    }
}
/***********************************************************************************
 ** Description: Returns the position of the first occurrence of the parameter, or -1
 ***********************************************************************************/
int StringList::positionOf(string str){
    // position of node in list
    int position = 0;
    
    ListNode *nodePtr = head;
    
    while (nodePtr != NULL){
        // ptr->value returns the value member variable of ptr to head ListNode
        if (nodePtr->value == str){
            return position;        
        } else {
            position++;
            nodePtr = nodePtr->next;
        }
    }
    return -1;
}
/***********************************************************************************
 ** Description: Sets value of the node at the indicated position, to the value of 
 the string parameter.
 ***********************************************************************************/
bool StringList::setNodeVal(int num, string str){
    int position = 0;
    ListNode *nodePtr = head;

    while (nodePtr != NULL){
        
        if (position == num){
            nodePtr->value = str;
            return true;
        }
        else {
            nodePtr = nodePtr->next;
            position++;
        }
    }
    return false;
}
/***********************************************************************************
 ** Description: Return a vector with the same size, values, and order as the 
 StringList.
 ***********************************************************************************/
vector<string> StringList::getAsVector(){
    vector<string> vect;
    
    ListNode *nodePtr = head;
    
    while (nodePtr != NULL){
        vect.push_back(nodePtr->value);
        nodePtr = nodePtr->next;
    }
    return vect;
}
/***********************************************************************************
 ** Description: Delete memory for StringList object
 ***********************************************************************************/
StringList::~StringList(){
    delete this->head;
}

////////////////////////////////TEST FUNCTIONS//////////////////////////////////////
void StringList::display(){
    ListNode *nodePtr = head;
    while (nodePtr != NULL){
        cout << nodePtr->value << " ";
        nodePtr = nodePtr->next;
    }
}

void StringList::printVect(vector<string> vect){
    for (int i = 0; i < vect.size(); i++){
        cout << vect[i] << " " << endl;
    }
}

void StringList::printPos(string str){
    cout << positionOf(str) << endl;
}
////////////////////////////////TEST FUNCTIONS///////////////////////////////////////



