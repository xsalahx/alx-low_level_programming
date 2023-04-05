#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 if success, 1 otherwise.
 */
int main(int argc, char **argv)
{
	int n;
	int c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n <= 0)
		printf("0\n");
	else
	{
		c = c + n / 25;
		n = n % 25;
		c = c + n / 10;
		n = n % 10;
		c = c + n / 5;
		n = n % 5;
		c = c + n / 2;
		n = n % 2;
		c = c + n;
		printf("%d\n", c);
	}
	return (0);
}
