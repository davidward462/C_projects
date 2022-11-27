#include <stdio.h>
#include "stack.c"

int main()
{
    Pop();
    Push(20);
    Push(56);
    Push(100);
    PrintStack();
    return 0;
}
