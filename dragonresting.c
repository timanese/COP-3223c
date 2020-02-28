
//  dragonresting.c
//  Created by Tim Yang on 1/26/20.
// Project 2 (week 3)

// Calling the set number that is needed to find out how much a dragon needs to rest
#define SLEEP_MULTIPLIER 2.5

#include <stdio.h>

// Main function
int main(void){
    // Declaring the variables needed
    int active, rest;
    
    // Prompts the user for the amount of time in mintues the dragon is active.
    printf("How long was your dragon active?\n");
    scanf("%d", &active);
    
    // Calculates the amount of sleep the dragon needs.
    rest = active * SLEEP_MULTIPLIER;
    
    // Determines if the dragon needs more training or how much rest they should have.
    if(active == 0)
        printf("Your dragon should spend more time training.\n");
    else
        printf("Your dragon should %d hours and %d minutes of sleep\n", rest / 60, rest % 60 );
   
    return 0;
    
}
