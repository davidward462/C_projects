#include <stdio.h>

int main()
{
    int m, n, r;
    printf("$ ");
    scanf("%d %d", &m, &n);
    printf("m = %d\nn = %d\n", m, n); // debugging

    while(n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    printf("gcd: %d", m);

    return 0;
}