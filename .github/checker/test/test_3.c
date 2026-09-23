#include "unity.h"
#include "unit_conversion_calculator.h"


void setUp(void) {}
void tearDown(void) {}

void test_1(void) {
    double input[] = {4.0};
    double expected[] = {15.14164};
    double output[1];

    int result = convertVolumes(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertVolumes(4)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}

void test_2(void) {
    double input[] = {11.0};
    double expected[] = {41.63951};
    double output[1];

    int result = convertVolumes(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertVolumes(11)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}

void test_3(void) {
    double input[] = {17.0};
    double expected[] = {64.35197};
    double output[1];

    int result = convertVolumes(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertVolumes(17)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}

void test_4(void) {
    double input[] = {23.0};
    double expected[] = {87.06443};
    double output[1];

    int result = convertVolumes(input, output, 1);
    TEST_ASSERT_EQUAL_INT(0, result);
    printf("convertVolumes(23)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0001, expected[0], output[0]);
    fflush(stdout);
}