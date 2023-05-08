#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: casting an int[][] into an int*
 * @size: size of an array of array is stored in memory.
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int num1, num2, y;

	num1 = 0;
	num2 = 0;

	for (y = 0; y < size; y++)
	{
		num1 = num1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		num2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", num1, num2);
}
