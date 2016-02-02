//  Project 2a, 165/400
/**********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/6/2015
 ** Description:    PROJECT 2a requires a player to guess a number input by
 the user.  The program will guide the guesses to the right answer with prompts
 of higher/lower.
 *********************************************************************************/


#include <iostream>
using namespace std;

int main() {

    int userNumber;
    int playerGuess;
    bool playerWon = false;
    int numberTries = 0;
    
    cout << "Enter the number for the player to guess." << endl;
    
    cin >> userNumber;
    
    while (playerWon == false) {
        
        cout << "Enter your guess." << endl;
        
        cin >> playerGuess;
        
        numberTries++;
        
        if (playerGuess == userNumber) {
            
            cout << "You guessed it in " << numberTries << " tries." << endl;
            
            playerWon = true;
        }
        
        else if (playerGuess < userNumber){
            
            cout << "higher" << endl;
        }
        
        else if (playerGuess > userNumber){
            
            cout << "lower" << endl;
        }

    }
    
    return 0;
}
