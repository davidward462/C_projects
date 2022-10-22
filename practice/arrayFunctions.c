// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Returns a random integer between 0 and max, inclusive.
int RandomInt(int max)
{
    return rand() % (max+1);
}

void PrintArray(int *array, int length)
{
    int position = 0;
    int *arrayp = array;
    
    for(int i = 0; i < length; i++)
    {
        printf("%d ", *arrayp++);
    }
    printf("\n");
}

void PrintArrayRich(int *array, int length, char* name)
{
    int position = 0;
    int *arrayp = array;
    printf("%s = [", name);
    for(int i = 0; i < length; i++)
    {
        printf("%d", *arrayp++);
        if(i < length-1)
            printf(" ");
    }
    printf("]\n");
}

int GetRandomSign()
{
    int randInt = RandomInt(2); // between 0 and 1?
    if(randInt < 1)
        return -1;
    else
        return 1;
}

// Populates the given array with integers from 0 to maxValue, inclusive.
// Parameter passed by value.
void RandPopulateArray(int *array, int length, int maxValue)
{
    for(int i = 0; i< length; i++)
    {
        *(array+i) = rand() % (maxValue+1); 
    }
}

// Takes an integer array of at least one element.
// Returns the largest value found in the array.
int GetMax(int *array, int length)
{
    int currentMax = *array;
    for(int i = 1; i<length; i++)
    {
        if(i < length) // if there is at least one more element
        {
            if(*(array+i) > currentMax)
                currentMax = *(array+i);
        }
    }
    return currentMax;
}

int GetMin(int *array, int length)
{
    int currentMin = *array;
    for(int i = 1; i<length; i++)
    {
        if(i < length) // if there is at least one more element
        {
            if(*(array+i) < currentMin)
                currentMin = *(array+i);
        }
    }
    return currentMin;
}

double Average(int *array, int length) // Mean
{
    double sum = 0;
    for (int i = 0; i< length; i++)
    {
        sum += *(array+i);
    }
    return sum/length;
}

void PrintRange(int *array, int length)
{
    int max = GetMax(array, length);
    int min = GetMin(array, length);
    printf("%d <= x <= %d\n", min, max);
}

// Takes two int arrays and the length of both of them.
// Returns true if all elements match, false otherwise.
bool ArrayMatch(int *a, int *b, int length)
{
    for(int i = 0; i< length; i++)
    {
        if(*(a+i) != *(b+i))
        {
            return false;
        }
    }
    return true;
}

// Testing helpers
bool IntAreEqual(int a, int b)
{
    if(a == b)
        return true;
    else
        return false;
}

bool DoubleAreEqual(double a, double b)
{
    if(a == b)
        return true;
    else
        return false;
}

void PrintArrayInfo(int *array, int length)
{
    // call and print most array functions
}

// Begin testing

void TestRandomInt(int numTests, int maxVal)
{
    printf("Testing RandomInt() with values between 0 and %d...\n", maxVal);
    for(int i = 0; i< numTests; i++)
    {
        int r = RandomInt(maxVal);
        if((r< 0) || (r > maxVal))
        {
            printf("Failed: value was %d\n", r);
            return;
        }
    }
    printf("Passed.\n");
}

void TestGetRandomSign(int numTests)
{
    printf("Testing GetRandomSign()...\n");
    for(int i = 0; i< numTests; i++)
    {
        int r = GetRandomSign();
        if((r != 1) && (r != -1))
        {
            printf("X Failed: value was %d\n", r);
            return;
        }
    }
    printf("Passed.\n");
}
// End Testing

int main(void) {
    
    srand((unsigned)time(0));
    
    int length = 20;
    int a[length];
    
    // Populate array
    RandPopulateArray(a, length, 20);
    
    PrintArrayRich(a, length, "a");
    
    
    //printf("\nmax: %d\n", GetMax(array, length));
    //printf("min: %d\n", GetMin(array, length));
    //printf("Mean: %.2f\n", Average(array, length));
    //PrintRange(array, length);
    PrintArrayInfo(a, length);
    
    
    // Testing
    printf("----- Begin testing -----\n");
    TestRandomInt(50, 1);
    TestRandomInt(50, 10);
    TestRandomInt(100, 97);
    TestRandomInt(100, 0);
    TestRandomInt(100, 1);
    TestRandomInt(100, 2);
    TestGetRandomSign(50);
    printf("----- End Testing -----\n");
    
    printf("\nEnd program.");
    return 0;
}
