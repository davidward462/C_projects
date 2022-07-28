#include <stdio.h>
#include <stdbool.h>

int greater(int a, int b);

int main()
{
    int a, b;
    bool flag;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    if(a == 42 || b == 42) flag = true;

    printf("-> %d\n", greater(a,b));

    flag ? printf("true\n") : printf("false\n");

    return 0;
}

int greater(int a, int b)
{
    return a > b ? a : b;
}