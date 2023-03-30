/**
 * rot13 - encodes a string using rot13
 * @str: String
 *
 * Return: str
 */
char *rot13(char *str)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j;

	while (str[i] != 0)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
