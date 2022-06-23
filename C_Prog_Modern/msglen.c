#include <stdio.h>

int main(void)
{
    int length = 0;

    printf("$");
    while(getchar() != '\n')
        length++;

    printf("you entered %d characters.\n", length);

    return 0;
}