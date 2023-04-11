#include <stdlib.h>

/**
 * _strdup - create copy of a string
 * @str: string
 *
 * Return: string copy
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = (char *) malloc((i + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i >= 0)
		{
			s[i] = str[i];
			i--;
		}
	}
	return (s);

}
