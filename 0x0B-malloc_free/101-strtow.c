#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function prototypes */
int count_words(char *str);
char **allocate_words(int word_count);
int extract_words(char *str, char **words);
char **strtow(char *str);
void free_words(char **words, int word_count);



/**
 * count_words - Counts the number of words in a string
 * @str: Input string
 *
 * Return: Number of words in the string
 */
int count_words(char *str)
{
	int i, word_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			word_count++;
		}
	}

	return (word_count);
}

/**
 * allocate_words - Allocates memory for an array of words
 * @word_count: Number of words
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 */
char **allocate_words(int word_count)
{
	char **words;

	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	return (words);
}

/**
 * extract_words - Extracts words from a string and stores them in an array
 * @str: Input string
 * @words: Array of words
 *
 * Return: 0 on success, -1 on failure
 */
int extract_words(char *str, char **words)
{
	int i, j, word_length = 0;

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			word_length++;
		}

		if ((str[i] != ' ' && str[i + 1] == ' ')
						|| (str[i] != ' ' && str[i + 1] == '\0'))
		{
			words[j] = (char *)malloc(sizeof(char) * (word_length + 1));
			if (words[j] == NULL)
			{
				free_words(words, j);
				return (-1);
			}

			strncpy(words[j], &str[i - word_length + 1], word_length);
			words[j][word_length] = '\0';
			word_length = 0;
			j++;
		}
	}

	words[j] = NULL;
	return (0);
}

/**
 * strtow - Splits a string into words
 * @str: Input string to be split
 *
 * Return: Pointer to an array of strings (words), or NULL if str == NULL
 *         or str == "" or if memory allocation fails
 */
char **strtow(char *str)
{
	int word_count = count_words(str);
	char **words = allocate_words(word_count);

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}


	if (words == NULL)
	{
		return (NULL);
	}

	if (extract_words(str, words) == -1)
	{
		free_words(words, word_count);
		return (NULL);
	}

	return (words);
}

/**
 * free_words - Frees memory allocated for an array of words
 * @words: Array of words
 * @word_count: Number of words
 */
void free_words(char **words, int word_count)
{
	int i;

	for (i = 0; i < word_count; i++)
	{
		free(words[i]);
	}

	free(words);
}

