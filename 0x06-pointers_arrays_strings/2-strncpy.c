/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: max lenght
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;
	int stop = 0;

	for  (i = 0; i < n; i++)
	{
		if (*(src + i) == '\0' || stop == 1)
		{
	
			*(p + i) = '\0';
			stop = 1;
		}
		else
		{
			if (i < n)
			{
				*(p + i) = *(src + i);
			}
		}
	}
	return (dest);
}
