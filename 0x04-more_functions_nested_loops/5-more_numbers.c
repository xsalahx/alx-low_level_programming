#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 != 0)
			{
				_putchar('1');
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');

	}
}
