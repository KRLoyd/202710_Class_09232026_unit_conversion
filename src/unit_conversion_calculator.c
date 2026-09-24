#include <stdio.h>
#include "unit_conversion_calculator.h"


int convertDistances(const double *input, double *output, int num_values) {
    /* Your code here */
    // miles to kilometers
    int index;
    //loop 
    for (index = 0; index < num_values; index++)
    {
        // do math and save result to output at that index (same spot)
        output[index] = input[index] * MILES_TO_KILOMETERS;
    }
    //loop to do the printing
    for (index = 0; index < num_values; index++)
    {
        printf("Conversion Results:\n");
        printf("%f miles is %f kilometers\n", input[index], output[index]);
    }
    return 0;
}

int convertWeights(const double *input, double *output, int num_values) {
    /* Your code here */
        return 0;
}

int convertVolumes(const double *input, double *output, int num_values) {
    /* Your code here */
        return 0;
}

