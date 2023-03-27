/**
 * _strcpy - Copier une chaîne
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: pointer to destination buffer (dest)
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (1)
	{
		*p = *src;
		if (*p == '\0')
		{
			break;
		}
		p++;
		src++;
	}
	return dest;
}
