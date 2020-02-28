
// Tim yang
// Project1.C
// 1/15/20
// This is the first programming project for COP 3223C, Showcasing material from ch.6.
// Purpose of this program is to determine how many sheeps are nessasary to feed our new dragon for a month.

#include <stdio.h>
#include <math.h>

// Creats a constant for amount of protein in grams one sheep holds
#define SHEEPS 200

int main(void) {
    //Declaring variables needed for this program
    float weight, protein, total_of_sheep;
    
    // Asking user how heavy is their dragon and allows users to input their dragon's weight.
    printf("How much does your dragon weigh?\n");
    scanf("%f",&weight);
    
    // calculates the amount of protein in grams the dragon needs for a month.
    protein = (weight / 2.2 * 1.5) * 30;
    
    // Calculates the amount of sheeps needed for a month
    total_of_sheep = ceil(protein / SHEEPS);
    
    // Outputs the amount of sheeps needed for our dragon.
    printf("You need %.2f sheeps for your dragon!\n", total_of_sheep);
    
    return 0;
}
