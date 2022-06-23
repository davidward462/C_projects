#include <stdio.h>
#define A 3

void show(int a[], int n);

int main()
{
    int myArr[A];
    printf("Enter %d numbers:",A);
    for(int i = 0; i<A; i++)
    {
        scanf(" %d", &myArr[i]);
    }

    show(myArr, A);

    return 0;
}

void show(int array[], int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
}