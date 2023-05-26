/**
 * print_numbers - that prints numbers, followed by a new line.
 * @separator: the string
 * @n: the number of the parametar
 * @...: the integers numbers
 */

#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
	}
	va_start(ap, n);
	while (i--)
	{
		printf("%d%s", va_arg(ap, int),
			i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
