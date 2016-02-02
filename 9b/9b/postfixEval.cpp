//  Project 9b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/28/2015
 ** Description:PROJECT 9b
 **********************************************************************************/
#include <stack>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstring>

using namespace std;

//double postfixEval(char[]);
//
//int main() {
//    char cstr[] = "9.0 3.2 /";
//    double value = postfixEval(cstr);
//    cout << value << endl;
//    return 0;
//}

double postfixEval(char cstr[] ){
    stack<double> myStack;
   
    // Breaks the c-string into 'tokens', excluding whitespace
    char *token = strtok (cstr," ");
    
    // While the final token has not been identified
    while (token != NULL){
        
        // If that token can be converted to a double using atof
        if(atof(token)){
            
            // Pushes the double version of the token
            myStack.push(atof(token));
            
            // Create the next token; NULL is the last character in the previous token
            token = strtok (NULL, " ");
        }
        
        // If the token is not alphanumeric
        else if(ispunct(*token)){
            double num2 = myStack.top();
            myStack.pop();
            double num1 = myStack.top();
            myStack.pop();
            switch(*token){
                case '+': myStack.push(num1 + num2);
                    break;
                case '-': myStack.push(num1 - num2);
                    break;
                case '*': myStack.push(num1 * num2);
                    break;
                case '/': myStack.push((num1 / num2));
                    break;
            }
            token = strtok (NULL, " ");
        }
    }
    return myStack.top();
}