/**
 * _strstr - locates a substring
 * @haystack: haystack
 * @needle: needle
 *
 * Return: pointer to location
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			i = 0;
			while (needle[i])
			{
				if (needle[i] == haystack[i] && needle[i + 1] == 0)
					return (haystack);
				else if (needle[i] == haystack[i])
					i++;
				else
					break;
			}
		}
		haystack++;
	}
	return ((char *) 0x00);
}
