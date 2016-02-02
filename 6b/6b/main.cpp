//  Project 6b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/9/2015
 ** Description: PROJECT 6b converts a string of binary numbers to a decimal integer,
 and a decimal integer to a string of binary numbers
 **********************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/***********************************************************************************
 ** Description: binToDec(str, pos) takes a string of 1s and 0s, and a position integer
 from its helper function, and returns a decimal integer
 ***********************************************************************************/
int binToDec(string str, int pos){
        
    if (pos == str.length()){
        
        return 0;
    }
    
    else if (str.at(pos) == '1'){
        
        return binToDec(str, pos + 1) + pow(2.0,(str.length() - (pos + 1)));
    }
    
    else{
        
        return binToDec(str, pos + 1);
    }
}
/***********************************************************************************
 ** Description: binToDec(str) takes a string of 1s and 0s, and calls the binToDec
 function
 ***********************************************************************************/
int binToDec(string str){
    
    return binToDec(str, 0);
}

/***********************************************************************************
 ** Description: decToBin(int) takes an int and returns a string of its binary
 ** equivalent
 ***********************************************************************************/
string decToBin(int num){
    if(num == 0){
        
        return "0";
    }
    
    else if(num == 1){
        
        return "1";
    }
    
    else if (num % 2 == 0){
        
        return decToBin(num / 2) + "0";
    }
    
    else {
        
        return decToBin(num / 2) + "1";
    }
}

int main() {
    
    cout << binToDec("1111") << endl;
    string binOfDec = decToBin(41);
    
    return 0;
}









