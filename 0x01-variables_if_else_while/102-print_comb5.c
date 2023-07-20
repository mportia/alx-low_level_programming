#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int m, l;

	for (m = 0; l < 100; m++)
	{
		for (l = 0; < 100; l++)
		{
			if (m < l)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(' ');
				putchar((l / 10) + 48);
				putchar((l % 10) + 48);
				if (m != 98 || l != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
