//  Project 5b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/29/2015
 ** Description:PROJECT 5b creates a function that takes an array of type class Box
 and size as its parameters, and sorts the array from greatest to least Box volumes.
 **********************************************************************************/
#include <iostream>
#include "Box.hpp"
using namespace std;

//Function prototypes

/*void boxSort(Box[], int);
void showArray(Box[], int);

int main() {
    
    const int SIZE = 3;
    
    //Array of unsorted values
    Box boxArray[SIZE] = {Box(3, 4, 5), Box(3, 9, 12), Box(3, 3, 2)};
    
    //Display the values
    cout << "The unsorted values are:\n";
    showArray(boxArray, SIZE);
    
    //Sort the values
    boxSort(boxArray, SIZE);
    
    //Display them again
    cout << "The sorted values are:\n";
    showArray(boxArray, SIZE);
    
    return 0;
}*/


/***********************************************************************************
 ** Description: The boxSort function takes the array of Box and its size as
 parameters, and sorts the array by volume in descending order using the bubble sort
 ***********************************************************************************/
void boxSort(Box array[], int size){
   
    Box temp;
    bool swap;
    
    do{
        swap = false;
        
        // Search thru array
        for (int count = 0; count < (size - 1); count++){
            
            // Compare volumes
            if (array[count].getVolume() < array[count + 1].getVolume()) {
                
                // Swap values to move greatest value left
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}
/***********************************************************************************
 ** Description: The showArray function displays the newly sorted array.
 ***********************************************************************************/
void showArray(Box array[], int size){

    for (int count = 0; count < size; count++)
        
        cout << array[count].getVolume() << " ";
    
    cout << endl;
}






