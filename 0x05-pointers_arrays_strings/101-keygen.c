#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: the generated password
 */
int main(void)
{
	char c;
	int x = 0;

	srand(time(NULL));
	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}
	putchar(2772 - x);
	return (0);
}
