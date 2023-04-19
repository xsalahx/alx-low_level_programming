#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Exit status
 */
int main(int argc, char **argv)
{
	int bytes = atoi(argv[1]);
	int i;
	const unsigned char *f = (unsigned char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%.2x", f[i + 4]);
		if (i + 1 == bytes)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
