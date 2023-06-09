/**
 * reverse_array - reverses the content of an array of integers
 * @a: Array
 * @n: Number of elements
 */
void reverse_array(int *a, int n)
{
	int rev;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = rev;
	}
}
