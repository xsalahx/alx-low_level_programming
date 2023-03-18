#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0 ; i--)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
