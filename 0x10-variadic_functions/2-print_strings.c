#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string
 * @separator: separator "char"
 * @n: numbers count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	if (n <= 0)
	{
		printf("\n")
		return;
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
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
