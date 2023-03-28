#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (always success)
 */
int main(void)
{
	srand( time( NULL ) );
	printf("%d\n", rand());
	return (0);
}
