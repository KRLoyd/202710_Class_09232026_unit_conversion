#include "unity.h"
#include "unit_conversion_calculator.h"


void setUp(void) {}
void tearDown(void) {}

void test_1(void) {
    double input[] = {1.0};
    double expected[] = {1.60934};
    double output[1];

    int result = convertDistances(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertDistances(1)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}


void test_2(void) {
    double input[] = {3.0};
    double expected[] = {4.82802};
    double output[1];

    int result = convertDistances(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertDistances(3)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}

void test_3(void) {
    double input[] = {5.0};
    double expected[] = {8.0467};
    double output[1];

    int result = convertDistances(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertDistances(5)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}

void test_4(void) {
    double input[] = {7.0};
    double expected[] = {11.26538};
    double output[1];

    int result = convertDistances(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertDistances(7)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}

