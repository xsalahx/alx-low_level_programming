/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: list of accepted caracters
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	unsigned int c = 0;
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				c++;
				l = (l >= c) * l + (l < c) * c;
				break;
			}
			else if (accept[j + 1] == 0)
			{
				c = 0;
			}
			j++;
		}
		i++;
	}
	return (l);
}
