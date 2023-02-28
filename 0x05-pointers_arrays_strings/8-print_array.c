#include "main.h"

/**
 * print_array - unction that prints n elements of an array of integers
 * @a: pointers to firsr int
 * @n: pointer to second int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < 0; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(",");
	}
	printf("\n");
}
