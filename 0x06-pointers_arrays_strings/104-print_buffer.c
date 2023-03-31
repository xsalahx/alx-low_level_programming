#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: buffer size
 */
void print_buffer(char *b, int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
		printf("\n");
	for (i = 0; i < size; i = i + 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
			{
				printf("  ");
			}
			else
			{
				printf("%02x", *(b + i + j));
			}
			if (j % 2 == 1)
			{
				printf(" ");
			}
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (*(b + i + j) >= 32)
				{
					printf("%c", *(b + i + j));
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}
