#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < (int) sizeof(str) - 1; i++)
		{
			_putchar(str[i]);
		}
	}
}
