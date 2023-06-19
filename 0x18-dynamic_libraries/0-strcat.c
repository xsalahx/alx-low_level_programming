/**
 * _strcat - concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 *
 * Return: Pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (1)
	{
		if (*p == '\0')
		{
			break;
		}
		p++;
	}
	while (1)
	{
		*p = *src;
		if (*src == '\0')
		{
			break;
		}
		p++;
		src++;
	}
	return (dest);
}
