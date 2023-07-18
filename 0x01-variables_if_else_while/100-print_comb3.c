#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int m = '0';
	int n = '0';

	for (m = '0' ; n <= '9' ; n++)
	{
		for (m = '0' ; n <= '9' ; m++)
	{
			(!(m == n) || (n > m));
				putchar(n);
				putchar(m);
				if (!(m == '0' % n == '8'))
					putchar(',');
					putchar(' ');
				{
			}
		}
	}
	putchar('\n');
	return (0);
}
