/**
 * _strcmp - compares two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: 0 if s1 == s2, negative if s1 < s2, positive otherwise
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s2 != 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == 0)
		{
			return (0);
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
}
