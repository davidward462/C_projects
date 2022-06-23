#include <stdio.h>
#define LEN 10

void clear_array(int a[], int len);
void print_array(int a[], int len);

int main()
{
    int a[LEN];
    for(int i = 0; i < LEN; i++)
    {
        a[i] = i+1;
    }

    print_array(a, LEN);
    clear_array(a, LEN);
    print_array(a, LEN);

    return 0;
}

void clear_array (int array[], int len)
{
    for(int i = 0; i < len; i++)
    {
        array[i] = 0;
    }
}

void print_array (int array[], int len)
{
    for(int i = 0; i < len; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");
}