#include "main.h"

/**
 * _isupper - Checks for lower case character
 * @c: The character to be checked
 * Return: 1 for uppercase or 0 for anything els
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
