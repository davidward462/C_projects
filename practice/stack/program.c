#include <stdio.h>
#include "stack.h"

void print(int input)
{
    printf("%d\n", input);
}

void PrintBool(int input)
{
    printf("%s\n", input ? "true" : "false");
}

int AreEqual(int a, int b)
{
    if(a == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{   
    
    PrintBool(IsEmpty());
    PrintBool(IsEmpty());
    
    Push(1);
    int value = Pop();
    PrintBool(AreEqual(1, value));
    PrintBool(IsEmpty());
    Push(2);
    Push(3);
    value = Pop();
    PrintBool(AreEqual(3, value));

    ClearStack();
    PrintBool(AreEqual(0, Pop()));

    return 0;
}






