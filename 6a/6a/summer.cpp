//  Project 6a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/9/2015
 ** Description: PROJECT 6a sums the values of an array through recursion.
 **********************************************************************************/

#include <iostream>
using namespace std;

/***********************************************************************************
 ** Description: the summer function with three parameters, double, int, int, 
 sums the array
 ***********************************************************************************/
double summer(double arr[], int SIZE, int pos){
    
    if (SIZE == 0){

        return 0;
    }
    else{
    
        return arr[pos] + summer(arr, SIZE - 1, pos + 1);
    }
}
/***********************************************************************************
 ** Description: the summer function with two parameters double int, is a helper
 function that passes the array position.
 ***********************************************************************************/
double summer(double arr[], int SIZE){
    
    int pos = 0;
    
    return summer(arr, SIZE, pos);
}


int main() {
    
    const int SIZE = 5;
    
    double arr[SIZE] = {5.1, 3.1, 8.1, 1.1, 0.0};
    
    double sum = summer(arr, SIZE);
    
    cout << sum << endl;
    
    return 0;
}
