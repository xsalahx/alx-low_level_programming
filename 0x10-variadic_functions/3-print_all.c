#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: format (char *)
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i = 0, b = 0;

	va_start(ap, format);
	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				b = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				b = 1;
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				b = 1;
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				b = 1;
				break;
		}
		if (format[++i] != '\0' && b == 1)
			printf(", ");
		b = 0;
	}
	printf("\n");
	va_end(ap);
}
