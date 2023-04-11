#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
static int count_words(char *str)
{
	int count = 0;
	bool in_word = false;

	for (; *str != '\0'; ++str)
	{
		if (*str != ' ')
		{
			if (!in_word)
			{
				in_word = true;
				++count;
			}
		}
		else
		{
			in_word = false;
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: String
 *
 * Return: List of words
 */
char **strtow(char *str)
{
	int word_count, word_index, i, j, word_length;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_index = 0;
	for (i = 0; i < word_count; ++i)
	{
		while (*str == ' ') /* skip spaces */
			++str;
		word_length = 0;
		while (str[word_length] != ' ' && str[word_length] != '\0')
			++word_length;
		words[word_index] = malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0; j < i; ++j) /* free allocated memory */
				free(words[j]);

			free(words);
			return (NULL);
		}
		for (j = 0; j < word_length; ++j)
			words[word_index][j] = str[j];
		words[word_index][word_length] = '\0';
		str += word_length;
		++word_index;
	}
	words[word_index] = NULL;
	return (words);
}

