#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100
//#define MIN(m,n) 

// Stack using external variables.

int contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
    printf("error: stack overflow\n");
}

void stack_empty(void)
{
    printf("error: stack empty\n");
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int n)
{
    if(is_full()) 
        stack_overflow();
    else
        contents[top++] = n; // increment top after use
}

void pop(void)
{
    if(is_empty())
        stack_empty();
    else
        contents[--top]; // decrement top before use
}

int put_in_range(int n)
{
    if(n < 0)
        return n = 0;
    else if(n < 100)
        return n = 100;
    else
        return n;
}

void print_stack(void)
{
    for(int i = 0; i < top; i++)
    {
        printf("%d ", contents[i]);
    }
}

int main(void)
{
    int start, end;
    printf("$ ");
    scanf("%d %d", &start, &end);
    put_in_range(start);
    put_in_range(end);

    for(int i = start; i <= end; i++)
    {
        push(start++);
    }

    print_stack();

    return 0;
}