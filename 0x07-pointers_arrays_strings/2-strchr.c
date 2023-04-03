/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
