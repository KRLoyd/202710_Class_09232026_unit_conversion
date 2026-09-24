#include <stdio.h>
#include <stdlib.h>
#include "unit_conversion_calculator.h"


int main(void) {
    /* Your code here */
    //int convertDistances(const double *input, double *output, int num_values);
    //int convertWeights(const double *input, double *output, int num_values);
    // int convertVolumes(const double *input, double *output, int num_values);

    char *userInput = NULL;

    // menu
    do {

        // menu! 
        printf("Unit Conversion Calculator\n");
        printf("1. Convert distances from miles to kilometers\n");
        printf("2. Convert weights from pounds to kilograms\n");
        printf("3. Convert volumes from gallons to liters\n");
        printf("4. Exit\n");
        printf("\tEnter your choice:");
        // GET THE CHOICE
        scanf("%s", userInput);
        printf("\tEnter the number of values to convert (max 5):");
        // GET NUMBER OF VALUES
        printf("\tEnter the values to convert:");
        // GET THE VALUES SAVED -- Loop? with scanf()?

        // do work --> in switch statement 
        //print the stuff with a special print function .
        
        // tell user to do it all again
        printf("\tPress Enter to continue...");

    } while (0);

    return EXIT_SUCCESS;
}