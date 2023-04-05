#include <stdio.h>
#include <stdlib.h>

/**
 * isvalid_str - check string is valid int
 * @s: string
 *
 * Return: 1 if valid, 0 otherwise
 */
int isvalid_str(char *s)
{
	int i = 0;

	if (*s == '-')
		i++;
	for (; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 if success, 1 otherwise.
 */
int main(int argc, char **argv)
{
	int n = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (isvalid_str(argv[i]))
			n = n + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", n);
	return (0);
}
