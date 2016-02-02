//  Project 5a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description: PROJECT 5a consists of a function that takes an array of strings
 and its size, and sorts the string in alphabetical order (ascending).
 **********************************************************************************/
#include <iostream>
#include <cctype>
using namespace std;

//Function prototypes
void stringSort(string[], int);
void showArray(const string[], int);

int main() {
    const int SIZE = 4;
    
    //Array of unsorted values
    string strings[SIZE] = {"Zebra", "Alligatortoo", "cheese", "blligator"};
    
    //Display the values
    cout << " The unsorted strings are\n " << endl;
    showArray(strings, SIZE);
    
    //Sort the array
    stringSort(strings, SIZE);
    
    //Display the values again
    cout << "The sorted values are\n" << endl;
    showArray(strings, SIZE);
    
    return 0;
}

/***********************************************************************************
 ** Description: The stringSort function takes the array of strings and its size as
 parameters, and sorts the string in alphabetical order.
 ***********************************************************************************/
void stringSort(string array[], int size) {
    
    // start at element 1 in comparison (location 0)
    for (int startScan = 0; startScan < (size - 1); startScan++) {
        
        int minIndex = startScan;
        
        string minValue = array[startScan];
        
        // start at element 2 in comparison (location 1)
        for(int index = startScan + 1; index < size; index++) {
            
            // if first word is shorter than second word
            if (array[startScan].length() <= array[index].length()){
                
                // bool match = true;
                
                // start at letter one in both words
                for (int i = 0; i < array[startScan].length(); i++){
                    
                    string string1 = array[startScan];
                    string string2 = array[index];
                    char ch1 = string1[i];
                    char ch2 = string2[i];
                    
                    // while (match == true) {
                    
                    if (toupper(ch2) < toupper(ch1)){
                        
                        //match = false;
                        minValue = array[index];
                        minIndex = index;
                    }
                }
            }
            
            else {
                
                // bool match = true;
                
                // start at letter one in both words
                for (int j = 0; j < array[index].length(); j++){
                    
                    string string1 = array[startScan];
                    string string2 = array[index];
                    char ch1 = string1[j];
                    char ch2 = string2[j];
                    
                    //  while (match == true) {
                    
                    if (toupper(ch2) < toupper(ch1)){
                        
                        // match = false;
                        minValue = array[index];
                        minIndex = index;
                    }
                }
            }
            
            
            /*for(int letterComp = 0; letterComp < abs((array[i].length())-array[index].length()); letterComp++){
             
             if (toupper(array[index].at(0)) < toupper(minValue.at(0))) {
             
             minValue = array[index];
             
             minIndex = index;
             }
             }*/
            
            array[minIndex] = array[startScan];
            
            array[startScan] = minValue;
            
        }   // endFor2
    }       // endFor1
}           // endFunction
/***********************************************************************************
 ** Description: The showArray function displays the newly sorted array.
 ***********************************************************************************/
void showArray(const string array[], int size) {
    
    for (int count = 0; count < size; count++) {
        
        cout << array[count] << " " << endl;
    }
}





