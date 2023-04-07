/**
 * _atoi - convert a string to an integer
 * @s: String
 *
 * Return: number (int)
 */
int _atoi(char *s)
{
	char sign = 1;
	char start = 0;
	int n = 0;

	while (1)
	{
		if (*s == '-' && start == 0)
		{
			sign = -sign;
		}
		else
		{
			if (*s >= '0' && *s <= '9')
			{
				start = 1;
				n = (n * 10) + (*s - '0') * sign;
			}
			else
			{
				if (start == 1 || *s == '\0')
				{
					break;
				}
			}
		}
		s++;
	}
	return (n);
}
