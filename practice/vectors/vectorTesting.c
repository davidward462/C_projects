#include <stdio.h>
#include <stdbool.h>
#include "vector.h"

// Unit test vector.c

void TestSetVector();

void TestScalarMultiply();

void TestAddVector();

void TestVectorAreEqual();

void SubtractVector();

int main(void)
{
    printf("Begin testing...\n");
    
    Vector a;
    SetVector(&a, 0, 0, 0);

    printf("End.\n");
    return 0;
}
