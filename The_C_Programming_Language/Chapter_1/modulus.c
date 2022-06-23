#include <stdio.h>

// Modulus function from scratch.
// Incomplete.

int mod(int x, int y)
{
    //printf("mod");
    int remainder = 0;
    int curr_remainder;

    for(int i = 0; i < y; i++)
    {
        curr_remainder = y - (x * i);
        if (curr_remainder < 0)
        {
            return  i-1;
        }

        if(curr_remainder < y)
        {
            return curr_remainder;
        }
    }

    return remainder;
}


void test(int max)
{
    //printf("test\n");
    for(int i = 1; i <= max; i++)
    {
        //printf("i");
        for(int j = 1; j <= max; j++)
        {
            //printf("\n\tj");
            int real = i % j;
            //printf("real : %d", real);
            int testCase = mod(i, j);
            if (real != testCase)
            {
                printf("\n\nerror");
                printf("\n\treal: (%d %% %d) = %d", i,j,real);
                printf("\n\ttest: (%d %% %d) = %d", i,j,testCase);
            }
        }        
    }
}


int main()
{
    printf("BEGIN\n");

    test(10);

    printf("\nEND");

    return 0;
}