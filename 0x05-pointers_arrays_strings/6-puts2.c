#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int m;

	for (m = 0 ; str[m] != '\0' ; m++)
	{
		if (m % 2 == 0)
			putchar(str[m]);
	}
	putchar('\n');
}
