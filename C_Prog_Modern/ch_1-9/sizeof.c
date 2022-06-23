#include <stdio.h>

int main(void)
{
    char c;
    int i;
    long l;
    float f;
    double d;

    printf("char:\t%lld\n",sizeof(c));
    printf("int:\t%lld\n",sizeof(i));
    printf("long:\t%lld\n",sizeof(l));
    printf("float:\t%lld\n",sizeof(f));
    printf("double:\t%lld\n",sizeof(d));

    d = 395.393f;
    printf("%.3lf",d);

    return 0;
}