/**
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;
	char d[] = " \t\n,;.!?\"(){}";
	int j;

	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] + 'A' - 'a';
			}
			for (j = 0; j < (int) sizeof(d) - 1; j++)
			{
				if (str[i - 1] == d[j])
				{
					str[i] = str[i] + 'A' - 'a';
					break;
				}
			}
		}
		i++;
	}
	return (str);
}
