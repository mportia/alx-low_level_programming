#include <stdio.h>

/**
 * main - main funtion
 *
 * Return: Always 0
 */
int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
		if (m != 'e' && m != 'q')
			putchar(m);
	putchar('\n');
	return (0);
}
