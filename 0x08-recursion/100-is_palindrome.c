/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: lenght of s
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
 * ispalindrome_helper - support function for is_palidrome
 * @i: iteration
 * @s: string
 *
 * Return: 1 if s string is a palindrome and 0 if not
 */
int ispalindrome_helper(int i, char *s)
{
	int l = _strlen_recursion(s);

	if (i >= l / 2)
		return (1);
	else if (s[i] == s[l - i - 1])
		return (ispalindrome_helper(i + 1, s));
	else
		return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrom
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	if (l == 0)
		return (0);
	else
		return (ispalindrome_helper(0, s));

}
