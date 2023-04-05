/**
 * wildcmp - compares two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		else if (s1[0] == 0)
			return (0);
		else
			return (wildcmp(s1 + 1, s2));
	}
	else if (*s1 != *s2)
		return (0);
	else
		return (wildcmp(s1 + 1, s2 + 1));
}
