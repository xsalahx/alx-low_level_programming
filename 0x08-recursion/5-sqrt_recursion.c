/**
 * sqrt_helper - support function for _sqrt_recursion
 * @i: guess
 * @n: number
 *
 * Return: natural sqrt of n if it exist
 */
int sqrt_helper(int i, int n)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt_helper(i + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: Natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_helper(0, n));
}
