#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separator "char"
 * @n: numbers count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n <= 0)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i + 1 == n)
			printf("\n");
		else
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ap);
}
