#include <stdio.h>
#include <stdbool.h>

int sum_array(int *a, int len)
{
	int *p;
	int sum;
	sum = 0;
	for(p = a; p < a+len; p++)
	{
		sum += *p;
	}
	return sum;
}

bool search(int *a, int len, int key)
{
	int *p;
	for(p=a; p<a+len; p++)
	{
		printf("%d : %d\n", *p, key);
		if(*p == key)
		{
			return true;
		}
	}
	return false;
}

int main(void)
{
	printf("BEGIN\n");
	
	int length = 4;
	int a[] = {10,10, 40, 33};
	printf("sum: %d\n", sum_array(a, length));

	int key = 11;
	printf("find %d: %d\n", key, search(a, length, key));
	
	return 0;
}
