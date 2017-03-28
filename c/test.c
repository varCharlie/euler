#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include "euler.h"

#define START_TEST(name) printf("BEGINNING %s TESTS\n%s\n", name,\
                                 "------------------")
#define END_TEST(name) printf("------------------\n\n")

void test_factorial()
{
    START_TEST("FACTORIAL");

    for (int i = 1, test_cases = 6; i <= test_cases; i++)
    {
        int actual_result = factorial(i);
        int expected_result = 0;
        switch (i) {
          case 1:
            expected_result = 1;
            break;
          case 2:
             expected_result = 2;
            break;
          case 3:
             expected_result = 6;
            break;
          case 4:
             expected_result = 24;
            break;
          case 5:
             expected_result = 120;
            break;
          case 6:
             expected_result = 720;
            break;
        }
        if (expected_result == actual_result)
        {
            printf("  [x] TEST %d PASSED:\n", i);
        }
        else
        {
            printf("  [x] TEST %d FAILED:\n", i);
        }
        printf("            `-> expected: %d\n", expected_result);
        printf("            |\n"
               "            `-> got: %d\n", actual_result);
    }

    END_TEST("FACTORIAL");
}

void test_e()
{
    START_TEST("E");

    for (int i = 4; i < 4+6; i++)
    {
        int iteration = i - 4 + 1;
        double actual_result = e(i);
        double expected_result = 0;
        switch (i) {
          case 4:
            expected_result = 2.7083333333333335;
            break;
          case 5:
            expected_result = 2.716666666666667;
            break;
          case 6:
            expected_result = 2.718055555555556;
            break;
          case 7:
            expected_result = 2.7182539682539684;
            break;
          case 8:
            expected_result = 2.71827876984127;
            break;
          case 9:
            expected_result = 2.7182815255731922;
            break;
        }
        if (expected_result == actual_result)
        {
            printf("  [x] TEST %d PASSED:\n", iteration);
        }
        else
        {
            printf("  [x] TEST %d FAILED:\n", iteration);
        }
        printf("           `-> expected: %f\n", expected_result);
        printf("            |\n"
               "            `-> got: %f\n", actual_result);
    }

    END_TEST("E");
}

void test_euler()
{
    START_TEST("EULER");

    for (int i = 10, test_cases = 6; i <= (test_cases * 10); i += 10)
    {
        int iteration = i / 10;
        double actual_result = euler(i);
        double expected_result = 0;
        switch (i) {
          case 10:
            expected_result = 1.5497677311665408;
            break;
          case 20:
            expected_result = 1.5961632439130233;
            break;
          case 30:
            expected_result = 1.6121501176015975;
            break;
          case 40:
            expected_result = 1.6202439630069352;
            break;
          case 50:
            expected_result = 1.625132733621529;
            break;
          case 60:
            expected_result = 1.6284055175083685;
            break;
        }
        if (expected_result == actual_result)
        {
            printf("  [x] TEST %d PASSED:\n", iteration);
        }
        else
        {
            printf("  [x] TEST %d FAILED:\n", iteration);
        }
        printf("            `-> expected: %f\n", expected_result);
        printf("            |\n"
               "            `-> got: %f\n", actual_result);
    }

    END_TEST("EULER");
}

int main()
{
    test_factorial();
    test_euler();
    test_e();
}
