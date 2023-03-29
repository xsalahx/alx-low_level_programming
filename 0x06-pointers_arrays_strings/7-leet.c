/**
 * leet - encodes a string into 1337
 * @str: String
 *
 * Return: str
 */
char *leet(char *str)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	int i = 0;
	int j;

	while (str[i] != 0)
	{
		for (j = 0; j < (int) sizeof(a) - 1; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
		i++;
	}
	return (str);
}
