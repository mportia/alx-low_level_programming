#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int m;

	for (m = 0 ; str[m] != '\0' ; m++)
		putchar(str[m]);
	putchar('\n');
}
