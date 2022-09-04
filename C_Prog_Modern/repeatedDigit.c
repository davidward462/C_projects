#include <stdio.h>
#include <stdbool.h>
#define TEN 10

int main()
{
    int digit_seen[TEN] = {false};
    int digit;
    long input;
    printf("$ ");
    scanf("%ld",&input);

    while(input > 0)
    {
        digit = input % TEN;
        //printf("digit = %d\n",digit); // For testing

        if(digit_seen[digit])
            break;
        digit_seen[digit] = true;
        input /= TEN;
    }

    (input > 0) ? printf("repeated digit") : printf("unique digits");

    return 0;
}