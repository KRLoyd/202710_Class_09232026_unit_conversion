#ifndef UNIT_CONVERSION_CALCULATOR_H
#define UNIT_CONVERSION_CALCULATOR_H

int convertDistances(const double *input, double *output, int num_values);
int convertWeights(const double *input, double *output, int num_values);
int convertVolumes(const double *input, double *output, int num_values);

#endif