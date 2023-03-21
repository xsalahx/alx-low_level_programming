#include "main.h"

/**
 * print_alphabet - Print lowercase alphabets followed by a new line
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < (int) sizeof(str) - 1; i++)
	{
		_putchar(str[i]);
	}
}
