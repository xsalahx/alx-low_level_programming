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
	int (*f)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2 || bytes == 0)
	{
		printf("Error\n");
		return (1);
	}
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)f;
		printf("%.2x", opcode);
		if (i + 1 == bytes)
			printf("\n");
		else
			printf(" ");
		f++;
	}
	return (0);
}
