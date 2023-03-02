#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: to be reversed array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int num, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		num = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = num;
	}
}
