#include <stdio.h>

int main()
{
    int i,n;
    printf("length of array: ");
    scanf("%d",&n);

    int array[n];

    printf("enter %d integers: ",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}