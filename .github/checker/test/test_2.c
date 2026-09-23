#include "unity.h"
#include "unit_conversion_calculator.h"


void setUp(void) {}
void tearDown(void) {}

void test_1(void) {
    double input[] = {2.0};
    double expected[] = {0.907184};
    double output[1];

    int result = convertWeights(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertWights(2)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}

void test_2(void) {
    double input[] = {4.0};
    double expected[] = {1.814368};
    double output[1];

    int result = convertWeights(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertWights(4)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}

void test_3(void) {
    double input[] = {6.0};
    double expected[] = {2.721552};
    double output[1];

    int result = convertWeights(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertWights(6)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}

void test_4(void) {
    double input[] = {8.0};
    double expected[] = {3.628736};
    double output[1];

    int result = convertWeights(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertWights(8)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}