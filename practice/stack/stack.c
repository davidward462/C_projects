#include <stdio.h>
#include <stdbool.h> // maybe won't use this

void push(int *top, int value);

int pop(int *top);

bool isFull(int *top);

void printStack(int *stack, int *top);

int main(void)
{

    int myStack[100];
    //int *top = myStack; // address
    int top = 0; // index

    push(top, 1);
    push(top, 2);
    push(top, 3);

    printStack(myStack, top);

    return 0;
}


void printStack(int *stack, int *top)
{
    int *p = top;
    int i = 0;
    while(i < 3)
    {
        printf("%d\n", stack[i]);
        //p--;
        i++;
    }
}

void push(int *top, int value)
{
    *top = value;
    top++;
}


