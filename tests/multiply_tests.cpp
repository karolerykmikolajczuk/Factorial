//
// Created by Karol on 28.05.2021.
//

#include "../src/Multiplication.h"
#include <cassert>
#include <stdio.h>
#include <stdlib.h>

void test_pattern(unsigned long number_1, unsigned long number_2, unsigned long result)
{
    char* temp;
    assert(strtoul(MultiplyingBigNumbers(&number_1, &number_2), &temp, 10) == result);
}

void testing_multiplication()
{
    test_pattern(10, 10, 100);
    test_pattern(20, 20, 400);
    test_pattern(1, 1, 1);
    test_pattern(2, 4, 8);
    test_pattern(100, 100, 10000);
    test_pattern(200, 2, 400);
    test_pattern(10000, 50, 500000);
    test_pattern(1000000, 2000, 2000000000);
}