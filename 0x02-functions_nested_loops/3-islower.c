#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: The character to print
 * Return: On success 1.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
