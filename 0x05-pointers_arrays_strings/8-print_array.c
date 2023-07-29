#include "main.h"

/**
 * print_array - print n element of an array of intergers
 * @a: array to be used
 * @n: number of elemts to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0 ; m < n ; m++)
	{
		printf("%d", a[m]);
		if (m < n - 1)
			printf(", ");
	}
	printf("\n");
}
