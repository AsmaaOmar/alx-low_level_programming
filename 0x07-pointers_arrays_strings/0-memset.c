/**
 * _memset - fills memory with a constant byte.
 * @s: the memory area pointed to by s
 * @b: the constant byte b
 * @n: fills the first n bytes
 * Return: a pointer to the memory area s
 */
#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
