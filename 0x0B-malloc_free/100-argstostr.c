#include <stdlib.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: lenght of s
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argc
 * @av: argv
 *
 * Return: String
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int i;
	int j;
	int l;
	char *s;
	int pos = 0;

	if (ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		l = _strlen_recursion(av[i]);
		len = len + l + 1;
	}
	s = (char *) malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		l = _strlen_recursion(av[i]);
		for (j = 0; j < l; j++)
		{
			s[pos] = av[i][j];
			pos++;
		}
		s[pos] = '\n';
		pos++;
	}
	s[pos] = 0;
	return (s);

}
