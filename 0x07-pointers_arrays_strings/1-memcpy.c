#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest.
 * @dest: memory area dest
 * @src: memory area src
 * @n: copies n bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
