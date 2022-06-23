#include <stdio.h>

int main()
{

    char light = 176;
    char mid = 177;
    char dark = 178;

    printf("%c", light);
    printf("%c", mid);
    printf("%c\n", dark);

    char out;

    for(int i = 127; i< 255; ++i)
    {
        out = i;
        printf("%c",out);
    }

    return 0;
}