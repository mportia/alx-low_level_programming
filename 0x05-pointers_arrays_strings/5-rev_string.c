#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int m;
	int count = 0;

	for (m = 0 ; s[m] != '\0' ; m++)
		count++;
	for (m = 0 ; m < count / 2 ; m++)
	{
		char n;

		n = s[m];
		s[m] = s[count - 1 - m];
		s[count - 1 - m] = n;
	}
}
