/**
 * _strdup -  duplicate of the string
 * @str:  duplicate of the string
 * Return: returns a pointer to the duplicated string.
 */
#include <stdlib.h>
#include "main.h"
char *_strdup(char *str)
{
	int i, size;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;
	ptr = malloc(size * sizeof(*str) + 1);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	return (ptr);
}
