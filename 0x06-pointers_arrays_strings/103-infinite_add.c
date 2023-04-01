#include <stdio.h>

/**
 * swap_char - swaps the values of two chars.
 * @a: pointer to char a
 * @b: pointer to char b
 */
void swap_char(char *a, char *b)
{
	char c = *a;

	*a = *b;
	*b = c;
}

/**
 * rev_string - reverses a string
 * @s: pointer to string (*char)
 */
void rev_string(char *s)
{
	char *c = s;
	int len = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		swap_char(c + i, s - 1 - i);
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: result buffer
 * @size_r: buffer size
 *
 * Return: 0 if size_r is not sufficent else r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *p = r;
	int len1 = 0;
	int len2 = 0;
	char s = 0;
	int i;

	for (i = 0; i < size_r; i++)
		*(r + i) = 0;
	while (*n1 != 0)
	{
		len1++;
		n1++;
	}
	while (*n2 != 0)
	{
		len2++;
		n2++;
	}
	n1--;
	n2--;

	while (len1 > 0 || len1 > 0)
	{
		if (size_r <= 1)
		{
			return (0);
		}
		if (len1 != 0)
		{
			s = *n1 - '0';
			len1--;
			n1--;
		}
		if (len2 != 0)
		{
			s = s + *n2 - '0';
			len2--;
			n2--;
		}
		s = s + *p;
		*p = (s % 10) + '0';
		if (s / 10 != 0)
		{
			if (size_r <= 2)
			{
				return (0);
			}
			else
			{
				*(p + 1) = s / 10;
			}
		}
		p++;
		size_r--;
	}
	*p = *p + '0';
	rev_string(r);
	return (r);
}
