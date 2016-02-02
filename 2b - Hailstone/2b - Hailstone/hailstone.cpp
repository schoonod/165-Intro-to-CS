//  Project 2b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/6/2015
 ** Description:PROJECT 2b creates a hailstone sequence calculation that counts the
 number of steps (calculations) to bring a given integer to 0
 **********************************************************************************/

#include <iostream>
/**********************************************************************************
 
 // Commented out for submission
 // Protoype for calculating the sequence from the int given
 int hailstone(int);
 
 int main() {
 
 int given = 3;
 
 // Run the sequence calculation
 hailstone(given);
 
 return 0;
 }
 ***********************************************************************************/

/**********************************************************************************
 ** Description: hailstone performs the sequence calculations.  That is,
 ** it checks if the given integer is odd or even, and performs the
 ** appropriate calculation.  Given is the parameter representing
 ** the integer testing the function.
 *********************************************************************************/
/*int hailstone(int given){
    
    // Counts steps in calculation if given int != 1
    int counter = 0;
    
    while (given != 1){
        
        // First step in calculation
        counter++;
        
        
        // Check if the given int is odd and perform calculation
        if (given % 2){
            
            given = (given * 3) + 1;
        }
        
        // If int is even, perform calculation
        else {
            
            given = (given / 2);
        }
    }
    
    // Return the number of attempts
    return counter;
}
*/

#include <iostream>
using namespace std;

//Function prototype
int hailstone(int);

int main()
{
    //Get a number from the user
    int origInput = 0;
    cout << "Enter a number" << endl;
    cin >> origInput;
    
    //If input is not zero, call the hailstone function, passing origInput
    
    hailstone(origInput);
    
    return 0;
}

/*************************************************
 hailstone
 This function takes the input of the current number
 and calculates the next number in the hailstone
 sequence.
 
 ************************************************/
int hailstone(int origInput) {
    int count = 0;
    while (origInput != 1)
    {
        count++;
        if (origInput % 2 == 0)     // Input is even
        {
            origInput = origInput / 2;
            cout << origInput << endl;
        }
        else                      // Input is odd
        {
            origInput = 3 * origInput + 1;
            cout << origInput << endl;
        }
    }
    cout << " Number of counts in hailstone function is: " << count << endl;
    return count;
}





