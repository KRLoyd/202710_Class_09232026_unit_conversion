#ifndef UNIT_CONVERSION_CALCULATOR_H
#define UNIT_CONVERSION_CALCULATOR_H

#define MAX_VALUES 5
#define MILES_TO_KILOMETERS 1.60934
#define POUNDS_TO_KILOGRAMS 0.453592
#define GALLONS_TO_LITERS 3.78541

int convertDistances(const double *input, double *output, int num_values);
int convertWeights(const double *input, double *output, int num_values);
int convertVolumes(const double *input, double *output, int num_values);

#endif