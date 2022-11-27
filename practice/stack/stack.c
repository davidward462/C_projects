#include <stdio.h>
#include "stack.h"
#define STACK_SIZE 100

// Stack implemented using an array

int stack[STACK_SIZE];
int top = 0;

int IsEmpty()
{
    return (top == 0) ? 1 : 0; // return 1 if statement is true, 0 otherwise
}

int IsFull()
{
    return (top == STACK_SIZE) ? 1: 0;
}


void Push(int n)
{
    if(!IsFull())
    {
        stack[top++] = n;
    }
    else
    {
        printf("stack is full.\n");
    }
}

int Pop()
{
    if(!IsEmpty())
    {
        return stack[top--];
    }
    else
    {
        printf("stack is empty.\n");
        return 0; // return 0 if stack is empty
    }
}

void ClearStack()
{
    top = 0;
}

void PrintStack()
{
    if(IsEmpty())
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("\t<-\n");
        for(int i = (top-1); i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}




