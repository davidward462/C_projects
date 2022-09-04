#include <stdio.h>

int main()
{
    int current, a, b, start, end;
    printf("$ ");
    scanf("%d %d", &a, &b);

    if(b > a)
    {
        start = a;
        end = b;
    }
    else
    {
        start = b;
        end = a;
    }

    current = start + 1;
    while(current < end)
    {
        printf("%d ",current++);
    }
    
    return 0;
}