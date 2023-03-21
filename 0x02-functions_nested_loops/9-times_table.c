#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j = 0;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
