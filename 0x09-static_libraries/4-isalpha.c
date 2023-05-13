#include "main.h"
/**
 * _isalpha - checks for lowercase character.
 * @c: The character to print
 * Return: On success 1.
 */
int _isalpha(int c)
{
	while ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
