int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; i < (int) sizeof(str) - 1; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
