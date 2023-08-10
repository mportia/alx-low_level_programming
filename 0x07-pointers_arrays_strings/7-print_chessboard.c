#include "main.h"

/**
 * print_chessboard - entry point
 * @a: array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int m;
	int p;

	for (m = 0; m < 8; m++)
	{
		for (p = 0; p < 8; p++)
			putchar(a[m][p]);
		putchar('\n');
	}
	return (0);
}
