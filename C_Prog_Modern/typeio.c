#include <stdio.h>

int main()
{
    float a;
    double b;

    printf("enter float: ");
    scanf("%f",&a);
    printf("enter double: ");
    scanf("%lf",&b);

    printf("a = %f\nb = %f\n", a, b);

    return 0;
}