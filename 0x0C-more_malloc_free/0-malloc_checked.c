/**
 * malloc_checked - allocates memory using malloc
 * @b: pointer to the allocated memory
 * Return: apointer or if malloc fails termenation 98
 */
#include <stdlib.h>
#include "main.h"
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);
	if (c == 0)
		exit(98);
	return (c);
}
