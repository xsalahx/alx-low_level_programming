/**
 * _strlen - function that returns the length of a string
 * @s: pointer to a string (char)
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
