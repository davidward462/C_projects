#include <stdio.h>

int getInput();

int main()
{
    int input = getInput();
    int twentys = 0, tens =0, fives=0;

    while(input >= 20)
    {
        input = input - 20;
        ++twentys;
    }

    while(input >= 10)
    {
        input = input - 10;
        ++tens;
    }

    while(input >= 5)
    {
        input = input - 5;
        ++fives;
    }

    printf("%d twentys\n%d tens\n%d fives\n%d ones\n", twentys, tens, fives, input);

    return 0;
}

int getInput()
{  
    int input;
    printf("Enter a dollar amount: ");
    scanf("%d", &input);
    return input;
}