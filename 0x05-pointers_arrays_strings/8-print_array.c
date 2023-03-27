#include "main.h"

/**
 *print_array - it print out n elements of an array of of integers.
 *@a: input array.
 *@n: input n elements.
 *Return: nothing.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1);
	}
	printf("\n);
}
