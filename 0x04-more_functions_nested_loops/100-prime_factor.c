#include <stdio.h>
#include <math.h>

/**
 * isprime - check for prime number
 * @p: number to check (int)
 *
 * Return: 1 if p is prime, 0 otherwise
 */
int isprime(long int p)
{
	int i;

	for (i = 2; i < (long int) sqrt(p) + 1; i++)
	{
		if (p % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	long int n = 612852475143;
	long int i;
	long int p = 1;


	i = 2;
	while (i <= n)
	{
		if (isprime(n))
		{
			p = n;
			break;
		}
		if ((n % i == 0) && i >= p && isprime(i))
		{
			p = i;
			n = n / i;
			i = 2;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", p);
	return (0);
}
