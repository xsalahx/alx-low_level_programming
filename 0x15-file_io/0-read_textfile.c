#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letter: number of letter to print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int c;
	int count = 0;
	FILE *fptr;

	if (filename == NULL)
		return (0);
	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);
	for (; letters > 0; letters--)
	{
		c = fgetc(fptr);
		if (c != -1)
			count += _putchar(c);
		else
			break;
	}
	fclose(fptr);
	return (count);
}
