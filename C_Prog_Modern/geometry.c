#include <stdio.h>

// Output the results of geometric calculations.

float areaRect(float a, float b);

int main()
{
    float a, b;

    printf("height: ");
    scanf("%f", &a);
    
    printf("length: ");
    scanf("%f", &b);

    printf("the area of a %.3f x %.3f rectangle is %.3f\n", a, b, areaRect(a,b));

    return 0;
}

float areaRect(float length, float width)
{
    return length * width;
}