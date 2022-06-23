#include <stdio.h>
#define MINS_TO_SECS(A) (A * 60)
#define LEN 5

void print_array(int length, int array[length])
{
    for(int i = 0; i < length; i++) printf("%d ", array[i]);
    printf("\n");
}

int main(void)
{
    int a = 20;
    int *nullp = NULL;
    int *ap = NULL;// ap will hold the address to an int (a)
    int list[LEN];
    for(int i = 0; i < LEN; i++) 
    {
        list[i] = i+1;
    }
    print_array(LEN, list);


    printf("the value of a null pointer is %x\n", ap);
    ap = &a; // store address of a in ap

    printf("value of a = %d\n", a);
    printf("address of a = %x\n", &a);
    printf("address stored in ap = %x\n", ap);
    printf("value of variable at address stored in ap = %d\n\n", *ap);

    int mins = MINS_TO_SECS(2);
    printf("secs: %d\n",mins);

    return 0;
}
