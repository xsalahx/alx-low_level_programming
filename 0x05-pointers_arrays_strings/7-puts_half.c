#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (*(str + len) != '\0')
	{
		len++;
	}
	for (i = 1 + (len - 1) / 2; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
