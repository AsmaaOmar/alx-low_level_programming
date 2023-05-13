#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the number of bytes in the initial segment of s
 * @accept: which consist only of bytes from accept
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
