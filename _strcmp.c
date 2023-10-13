#include "shells.h"

/**
 * _strcmp - Compare two string to check for equality
 * @s1: First string
 * @s2: Second String
 * Return: Difference between their characters
 */

int _strcmp(char *s1, char *s2)
{
	unsigned int j;
	unsigned int dif;
	unsigned int str1, str2;

	j = 0;
	dif = 0;
	str1 = _strlen(s1);
	str2 = _strlen(s2);
	if (str1 != str2)
	{
		dif = str1 - str2;
		return (dif);
	}
	while (s1[j] != '\0')
	{
		if (s1[j] > s2[j])
		{
			dif = s1[j] - s2[j];
			return (dif);
		}
		else if (s1[j] < s2[j])
		{
			dif = s1[j] - s2[j];
			return (dif);
		}
		j++;
	}
	return (dif);
}
