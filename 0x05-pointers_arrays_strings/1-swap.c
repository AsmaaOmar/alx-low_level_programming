#include "main.h"
/**
 * swap_int - swaps the values of integers
 * @a: integer num
 * @b: integer num
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
