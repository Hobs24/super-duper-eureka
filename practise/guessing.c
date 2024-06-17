//building a guessing game

#include <stdio.h>
#include <stdlib.h>

int main(){
    //creating variables
    int secrectNUmber  = 23;     //number that the user must guess
    int guess;           // the users number that they guessed
    int guessCount = 0;  // Count the number of guesses the user made
    int guessLimit = 3;   // the number of guesses the user can make
    int outOfGuesses = 0;       //tell us if user has any more guesses

    //limiting the number of guesses a user can do with the guess count variable
    while(guess != secrectNUmber && outOfGuesses == 0){
        if(guessCount <guessLimit){
            printf("Enter a number: ");
        scanf("%d", &guess);
        guessCount++;
        } else {
            outOfGuesses = 1;
        }
        
    }

    if (outOfGuesses == 1){
        printf("Out of guesses");
    }else {
        printf("YOU WON!!");

    }
    
    return 0;
}