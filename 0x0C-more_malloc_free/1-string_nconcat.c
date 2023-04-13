#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	if (s1)
	{
		while (s1[l1])
			l1++;
	}
	if (s2)
	{
		while (s2[l2] && l2 < n)
			l2++;
	}
	s = (char *) malloc(sizeof(char) * (l1 + l2 + 1));
	if (!s)
		return (NULL);
	s[l1 + l2] = '\0';
	if (s2)
	{
		while (l2)
		{
			s[l1 + l2 - 1] = s2[l2 - 1];
			l2--;
		}
	}
	if (s1)
	{
		while (l1)
		{
			s[l1 - 1] = s1[l1 - 1];
			l1--;
		}
	}
	return (s);
}
