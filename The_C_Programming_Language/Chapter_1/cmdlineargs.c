#include <stdio.h>
// get arguments when running program from the command line.

int main(int argc, char *argv[])
{
    printf("argc = %d\n", argc);
    
    for(int i=0; i<argc; ++i)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    return 0;
}