#include "shells.h"

/**
 * build_str - builds a new string using characters between two points
 * in a string
 * @str: The Base string
 * @start_sp: The starting character
 * @end_sp: The last character
 *
 * Return: The new string;
 */
char *build_str(char *str, unsigned int start_sp, unsigned int end_sp)
{
	char *newstr;
	int j = 0, k;

	k = (end_sp - start_sp) + 2;

	newstr = malloc(sizeof(char) * k);

	while (start_sp <= end_sp)
	{
		newstr[j] = str[start_sp];
		j++;
		start_sp++;
	}

	newstr[j] = '\0';

	return (newstr);
}
