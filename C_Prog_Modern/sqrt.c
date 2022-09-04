#include <stdio.h>
#include <math.h>
#define MAX_ITERATIONS 50

double squareRoot(double input);

int main(void)
{
    double input;
    printf("Enter a positive number: ");
    scanf(" %lf", &input);
    double result = squareRoot(input);
    double actual = sqrt(input);
    printf("%f <-> %f\n",result, actual);
}

// Use Newton's method
double squareRoot(double input)
{
    double guess = 1;
    double newGuess;
    double diff = 1;
    int count = 0;

    while((diff > 0.00001) && (count < MAX_ITERATIONS))
    {
        newGuess = (guess + (input/guess)) / 2.0f;
        printf("newGuess = %f\n",newGuess);
        diff = fabs(guess - newGuess);
        count++;
        guess = newGuess;
    }

    return guess;
}