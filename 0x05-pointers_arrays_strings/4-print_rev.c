#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int m;
	int count = 0;

	for (m = 0 ; s[m] != '\n' ; m++)
		count++;
	for (m = count - 1 ; m >= 0 ; m--)
		putchar(s[m]);
	putchar('\n');
}
