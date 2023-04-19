#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: execution status
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	int r;
	int (*f)(int, int);
	
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	r = (*f)(a, b);
	printf("%d\n", r);
	return (0);
}
