#include "shells.h"

/**
 * count_character - Counts the number of occurence of a given character
 * in a string
 * @str: The string
 * @c: The character to count
 *
 * Return: Number of @c found in @str
 */
int count_character(char *str, char c)
{
	int counts = 0, j = 0;

	while (str[j] != '\0')
	{
		if (str[j] == c)
			counts++;

		j++;
	}

	return (counts);
}
