/**
 * create_array - creates an array of chars, and initializes char.
 * @size: size of array
 * @c: char
 * Return: pointer to the array, or NULL if it fails
 */
#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
