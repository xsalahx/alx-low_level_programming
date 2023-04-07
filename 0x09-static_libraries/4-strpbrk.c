/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String
 * @accept: set of bytes
 *
 * Return: pointer to first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
