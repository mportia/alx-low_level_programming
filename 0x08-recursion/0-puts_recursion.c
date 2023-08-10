#include "main.h"

/**
 * _puts_recursion - function like put();
 * @s: input
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
