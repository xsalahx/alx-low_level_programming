#include "main.h"
#include <stdio.h>

/**
 * swap_char - swaps the values of two chars.
 * @*a: pointer to char a
 * @*b: pointer to char b
 */
void swap_char(char *a, char *b)
{
        char c = *a;

        *a = *b;
        *b = c;
}

/**
 * rev_string - reverses a string
 * @*s: pointer to string (*char)
 */
void rev_string(char *s)
{
	char *c = s;
	int len = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		swap_char(c + i, s - 1 - i);
	}
}
