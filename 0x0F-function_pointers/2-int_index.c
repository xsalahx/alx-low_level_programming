/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: array size
 * @cmp: fucntion used to compare int
 *
 * Return: index of the first element for which the cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
