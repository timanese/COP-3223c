/*
 Tim Yang
 COP 3233C week 4
 Project 4 (assignment 3)
 dragonfalling.c
 1/31/2020
 Calculates the altitude of a dragon every second it is flying
 */

#include <stdio.h>
#include <math.h>

// Constant for gravity, in feet per seconds.
#define GRAVITY 32

int main(void){
    // Declaring variable
    int height, time = 0;
    
    // Prompt user to enter in the height of the dragon nest.
    printf("What is the height of the dragon's nest?\n");
    scanf("%d", &height);
    
    // Declare variable to hold dragons location relative to the height of the tree.
    int dragon_location = height;
    
    // Print the header of the chart.
    printf("Time\t\t\tAltitude\n");
    
    //  loops the calculation of the dragons elevation in an interval of 1 second until elevation is 0.
    while (dragon_location > 0){
        
        // Declared variable to solve for the location of the dragon each second.
        int elevation = (GRAVITY * pow(time, 2)) / 2;
        dragon_location = height - elevation;
    
        // Checking to see if dragons location is negative
        // If it is negative it will change the value of dragons location to 0, meaning the dragon has landed onto the ground.
        if(dragon_location < 0){
            dragon_location = 0;
            printf("%d", dragon_location);
        }
        printf("%d\t\t\t\t%d\n", time, dragon_location);
        
        time++;
        
    }

    return 0;
}
