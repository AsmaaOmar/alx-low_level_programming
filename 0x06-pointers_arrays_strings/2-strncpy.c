#include "main.h"
/**
 * _strncpy - copy two strings with an intrgrt
 * @dest: input value
 * @src: input value
 * @n: interger counter
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (dest[j] != '\0')
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
