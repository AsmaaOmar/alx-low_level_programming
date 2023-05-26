/**
 * print_strings - that prints strings, followed by a new line.
 * @separator: the string
 * @n: the number of the parametar
 * @...: the integers numbers
 */

#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
	}
	va_start(ap, n);
	while (i--)
	{
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
