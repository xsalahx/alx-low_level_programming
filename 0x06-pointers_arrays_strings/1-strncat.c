#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	while (1)
	{
		if (*p == '\0')
		{
			break;
		}
		p++;
	}
	for (i = 0; i < n; i++)
	{
		if (*(src + i) == '\0' && i != 0)
		{
			*(p + i) = '\0';
			return (dest);
		}
		*(p + i) = *(src + i);
	}
	*(p + n) = '\0';
	return (dest);
}
