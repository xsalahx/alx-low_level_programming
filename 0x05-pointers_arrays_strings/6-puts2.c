#include "main.h"

/**
 * puts2 - Prints odd charaters of string
 * @str: pointer to string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str == '\0')
		{
			break;
		}
		str++;
	}
	_putchar('\n');
}
