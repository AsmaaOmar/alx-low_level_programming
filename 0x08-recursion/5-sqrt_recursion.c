/**
 * _sqrt_recursion - function that returns square root of a number.
 * @n: input number
 * @num: square root
 * Return: square root of a number.
 */
#include "main.h"
int natural_square(int n, int num);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (natural_square(n, 1));
}
/**
 * natural_square - returns the natural square root of a number.
 * @n: input number
 * @num: square root
 * Return: int result
 */
int natural_square(int n, int num)
{
	if (num * num == n)
		return (num);
	else if (num * num < n)
		return (natural_square(n, (num + 1)));
	else
		return (-1);
}
