#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 (Always success)
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
