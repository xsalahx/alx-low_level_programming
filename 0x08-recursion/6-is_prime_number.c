/**
 * isprime_helper - support function for is_prime_number function
 * @i: potential divisor
 * @n: number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int isprime_helper(int i, int n)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (isprime_helper(i + 1, n));
}

/**
 * is_prime_number - check if q nu;ber id prime
 * @n: number to check
 *
 * Return:  1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (isprime_helper(2, n));
}
