#include "main.h"
#include <stdlib.h>

/**
 * error - Prints "Error" to std output and exit with status 98
 */
void error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * _mult - multiplies two string numbers
 * @num1: number one
 * @num2: number two
 * @len1: lenght of num1
 * @len2: lenght of num2
 *
 * Return: num1 * num2
 */
char *_mul(char *num1, char *num2, int len1, int len2)
{
	char *m;
	int i;
	int j;
	int mul;
	int sum;

	m = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (!m)
		error();
	for (i = 0; i < len1 + len2 + 1; i++)
		m[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[i] - '0');
			sum = (m[i + j + 1] - '0') + mul;
			m[i + j + 1] = (sum % 10) + '0';
			m[i + j] += (sum / 10);
		}
	}
	for (i = 0; i < len1 + len2; i++)
	{
		if (m[i] != '\0')
		{
			m[i] += '0';
		}
	}
	return (m);
}

/**
 * main - Entry point
 * @argc: agrs count
 * @argv: args vector
 *
 * Return: exit status
 */
int main(int argc, char **argv)
{
	int len1 = 0;
	int len2 = 0;
	char *mul;
	int i = 0;

	if (argc != 3)
		error();
	while (argv[1][len1])
	{
		if (argv[1][len1] < '0' || argv[1][len1] > '9')
			error();
		len1++;
	}
	while (argv[2][len2])
	{
		if (argv[2][len2] < '0' || argv[2][len2] > '9')
			error();
		len2++;
	}
	mul = _mul(argv[1], argv[2], len1, len2);
	if (mul[0] == 0)
		i++;
	for (; i < len1 + len2; i++)
		_putchar(mul[i]);
	_putchar('\n');
	free(mul);
	return (0);
}
