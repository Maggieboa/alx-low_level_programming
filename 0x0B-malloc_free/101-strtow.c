#include"main.h"
#include<stdio.h>
#include<stdlib.h>
int _length(char *str);
int _count(char *str);
char **strtow(char *str);

/**
 *_length - Locates the index marking the end of the
 *
 *@str: placeholder for string
 *
 *Return: 0 for success and -1 if error occurs
 */
int _length(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		j++;
		i++;
	}
	return (j);
}

/**
 *_count - Counts the number of words contained within a string.
 *@str:placeholder for a string
 *
 *Return: 0 for success and -1 if error occurs
 */
int _count(char *str)
{
	int i = 0, words = 0, j = 0;

	for (i = 0; *(str + i); i++)
		j++;

	for (i = 0; i < j; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += _length(str + i);
		}
	}

	return (words);
}

/**
 * strtow - function to split words
 * @str:string to be splitted
 * Return: NULL if empty.
 **/
char **strtow(char *str)
{
	char **strings;
	int i = 0, words, word, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = _count(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (!strings)
		return (NULL);

	for (word = 0; word < words; word++)
	{
		while (str[i] == ' ')
			i++;

		letters = _length(str + i);

		strings[word] = malloc(sizeof(char) * (letters + 1));

		if (!strings[word])
		{
			for (; word >= 0; word--)
				free(strings[word]);

			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			strings[word][l] = str[i++];
		}
		strings[word][l] = '\0';
	}
strings[word] = NULL;

return (strings);
}
