/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to integer a
 * @b: pointer to integer b
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
