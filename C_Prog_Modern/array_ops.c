#include <stdio.h>
#define LENGTH 20

//broken

void print_array(int n,char a[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", a[i]);
    }
}

int main(void)
{
    printf("$ ");
    char input[LENGTH];
    int index = 0;
    char ch;
    while((ch = getchar()) != '\n') // Read until newline
    {
        input[index] = ch;
    }

    print_array(LENGTH, input);

    return 0;
}