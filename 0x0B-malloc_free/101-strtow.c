#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - splits a string into words.
 * @str: String
 *
 * Return: List of words
 */
char **strtow(char *str)
{
	char **s;
	int i;
	int begin = -1;
	int end = -1;
	int pos = 0;
	int c = 0;
	
	s = (char **) malloc (sizeof(char *));
	if (!s)
		return (NULL);
	while (str[pos])
	{
		if (begin == -1 && str[pos] != ' ')
		{
			begin = pos; 
		}
		else if ((str[pos] == ' ' || str[pos + 1] == 0) && begin != -1)
		{
			end = pos;
			c++;
			s = (char **) realloc(s, sizeof(char *) * (c + 1));
			s[c - 1] = (char *) malloc(sizeof(char) * (end - begin + 1 + (str[pos] != ' ')));
			for (i = 0; begin < end; i++)
			{
				s[c - 1][i] = str[begin];
				begin++;
			}
			s[c - 1][end] = '\0';
			begin = -1;
			end = -1;
		}
		pos++;
	}
	s[c] = NULL;
	return (s);
}
