#include "main.h"
#include <stdlib.h>

int _isdigit(char *str);
int _strlen(char *str);
void print_error(void);
char *multiply(char *num1, char *num2, int len1, int len2);

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *result;
	int len1, len2;
	int i = 0;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		print_error();
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	result = multiply(argv[1], argv[2], len1, len2);

	if (result[i] == '0')
		i++;
	for (; result[i]; i++)
		_putchar(result[i]);
	_putchar('\n');
	return (0);
}

/**
 * _isdigit - Checks if the given string is composed of digits
 * @str: String to check
 *
 * Return: 1 if str is composed of digits, 0 otherwise
 */
int _isdigit(char *str)
{
	for (; *str; str++)
		if (*str < '0' || *str > '9')
			return (0);
	return (1);
}

/**
 * _strlen - Computes the length of a string
 * @str: String to compute the length
 *
 * Return: Length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	for (; *str; str++)
		len++;
	return (len);
}

/**
 * print_error - Prints an error message and exits
 */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * multiply - Multiplies two numbers given as strings
 * @num1: First number
 * @num2: Second number
 * @len1: Length of the first number
 * @len2: Length of the second number
 *
 * Return: Pointer to the result string
 */
char *multiply(char *num1, char *num2, int len1, int len2)
{
	int i, j;
	int n1, n2, mul, carry;
	char *result;

	result = malloc(len1 + len2 + 1);
	if (!result)
	{
		print_error();
		exit(98);
	}
	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			mul = n1 * n2 + (result[i + j + 1] - '0') + carry;
			carry = mul / 10;
			result[i + j + 1] = (mul % 10) + '0';
		}
		result[i] += carry;
	}
	result[len1 + len2] = '\0';
	return (result);
}

