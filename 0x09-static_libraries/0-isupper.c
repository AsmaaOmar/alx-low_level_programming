#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: The character to print
 * Return: On success 1.
 */
int _isupper(int c)
{
	while (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
