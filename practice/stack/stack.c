#include <stdio.h>
#include "stack.h"
#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = 0;

void Push(int n)
{
    stack[top] = n;
    top++;
}

int Pop()
{
    return 0;
}

void ClearStack()
{

}

int IsEmpty()
{
    if(top == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int IsFull()
{
    if(top == STACK_SIZE)
    {
        return 0;
    }
    else
    {
        return 0;
    }
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




