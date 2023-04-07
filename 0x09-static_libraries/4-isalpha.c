/**
 * _isalpha - Checks for alphabetic character
 * @c: The charater to check (int)
 *
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwies
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
