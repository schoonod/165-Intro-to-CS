//  Project 4a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description: PROJECT 4a finds the mode(s) of a given array, adds the mode(s)
 to a vector, sorts the mode(s) in the vector, and returns it.
 **********************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/***********************************TEST*******************************************
// Prototype for finding mode funcdtion
vector<int> findMode (int[], int);
int main() {
    
    // Create an array
    const int ARRAY_SIZE = 7;
    int array[ARRAY_SIZE] = {0, 2, 2, 4, 5, 5, 5};
    
    findMode(array, ARRAY_SIZE);
    
    return 0;
}
 ***********************************************************************************/
/***********************************************************************************
 ** Description: Takes an array, a size, searches for mode(s) in the array, places
 them inside a vector, sorts the vector, and returns the vector.
 ***********************************************************************************/
vector<int> findMode (int array[], int ARRAY_SIZE){
    
    // Declare vector
    vector <int> modeVector;
    
    // Counter to maintain largest frequency of single recurring number
    int theModeCounter = 0;
    
    // Comparison of array values
    for (int i = 0; i < ARRAY_SIZE; i++){
        
        // Counter to maintain frequency of mode found within this loop
        int tempModeCounter = 0;

        // Match array[i] aganist all remaining array elements (j)
        for (int j = ARRAY_SIZE - 1; j > i; j--){

            // For every recurrence of a number, increment the temp counter
            if (array[i] == array[j]){
                
                tempModeCounter++;
            }
        }
        
        // Compare counters, clear vector, and push value to vector if true
        if (tempModeCounter > theModeCounter){
            modeVector.clear();
            modeVector.push_back(array[i]);
            theModeCounter = tempModeCounter;
        }
     
        // Checks to see if multiple values tie, and that ModeCounter is not 0.
        // ModeCounter at 0 will always equal tempCounter if no match is found.
        else if ((tempModeCounter == theModeCounter) && (theModeCounter!=0)){
            
            modeVector.push_back(array[i]);
        }
    }
   
    // Push array to vector if necessary.
    if (modeVector.empty()){
        
        for (int index = 0; index < ARRAY_SIZE; index++){
            
            modeVector.push_back(array[index]);
        }

    }
    
    // Sort vector
    sort(modeVector.begin(), modeVector.end());
    
    return modeVector;
}





