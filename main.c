//
//  main.c
//  GuessingGame.c
//  Created by Tim Yang on 1/24/20.
// This program is to showcase the use of conditional expression and relational opeators



#include <stdio.h>
// The standard library, adds things like the Rand function
#include <stdlib.h>
#include <time.h>

int main(void){
    int num, guess;
    //Seed the random number generator
    srand(time(0));
    
    //calls a random number from numbers 1 through 10. Modulus bounds the number from 0-9 but the +1 increases it to 0 - 10.
    num = rand() % 10 + 1;
    
    // Ask user to input a random number.
    printf("Guess a value between 1 and 10\n");
    scanf("%d", &guess);
    
    //if statement is a conditional expression that if proven true it will run.
    // whats inside the parentheses is the relational operators, used to compoare two expression.
    if (guess == num)
        printf("You guessed the number correctly!\n");
    // Another conditonal expression where if the if statement is false, then it runs the else statement
         else{
            printf("Sorry you did not guess the right number,\n");
            printf("THe secret number was %d.\n", num);
        }
         
         return 0;
         }
