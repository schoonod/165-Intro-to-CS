//  Project 5a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description: PROJECT 5a consists of a function that takes an array of strings
 and its size, and sorts the string in alphabetical order (ascending).
 **********************************************************************************/
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

//Function prototypes
/*void stringSort(string[], int);
void showArray(const string[], int);

int main() {
    const int SIZE = 4;
    
    //Array of unsorted values
    string strings[SIZE] = {"Zebra", "bumgenius", "cheese", "alligator"};
    
    //Display the values
    cout << " The unsorted strings are\n " << endl;
    showArray(strings, SIZE);
    
    //Sort the array
    stringSort(strings, SIZE);
    
    //Display the values again
    cout << "The sorted values are\n" << endl;
    showArray(strings, SIZE);
    
    return 0;
}*/

/***********************************************************************************
 ** Description: The stringSort function takes the array of strings and its size as
 parameters, and sorts the string in alphabetical order using selection sort
 ***********************************************************************************/
void stringSort(string array[], int size)
{
    int startScan;
    int minIndex;       // Minimum value position
    string minValue;    // Most alphabetical string value
    
    // Search thru array
    for(startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        
        // Search thru array starting at next element
        for(int index = startScan + 1; index < size; index++)
        {
            // Compare uppercase values of strings
            if(toupper(array[index].at(0)) < toupper(minValue.at(0)))
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        // Swap values
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}
/***********************************************************************************
 ** Description: The showArray function displays the newly sorted array.
 ***********************************************************************************/
/*void showArray(const string array[], int size) {
    
    for (int count = 0; count < size; count++) {
        
        cout << array[count] << " " << endl;
    }
}*/





