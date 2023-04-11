#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int l1 = 0;
	int l2 = 0;

	if (s1)
	{
		while (s1[l1])
			l1++;
	}
	if (s2)
	{
		while (s2[l2])
			l2++;
	}
	s = (char *) malloc((l1 + l2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (s2)
	{
		while (l2 >= 0)
		{
			s[l1 + l2] = s2[l2];
			l2--;
		}
	}
	if (s1)
	{
		while (l1 - 1 >= 0)
		{
			s[l1 - 1] = s1[l1 - 1];
			l1--;
		}
	}
	return (s);
}
