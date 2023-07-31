#include "main.h"

/**
 * reverse_array - reverse the conyent of an array of intergers
 * @a: the array of inyergers to be reversed
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
