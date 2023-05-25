#include "function_pointers.h"

/**
 * int_index - that searches for an integer.
 * @array: integer array
 * @size: size of array
 * @cmp: function pointer
 * Return: the index of the first element for the cmp fun
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
