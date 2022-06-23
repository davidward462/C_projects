#include <stdio.h>
#include <stdlib.h> 

int main()
{
    system("cls");
    int input;
    printf("$ ");
    scanf("%d", &input);

    switch (input)
    {
        case 0: printf("zero"); break;
        case 1: printf("one"); break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        default: printf("unknown"); break;
    }

    return 0;
}   