#include "shells.h"

/**
 * _strlen - Gets length of a string
 * @s: String
 * Return: length of string
 */

unsigned int _strlen(char *s)
{
	unsigned int j;

	while (s[j])
	{
		j++;
	}
	return (j);
}
