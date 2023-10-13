#include "shells.h"

/**
 * _strsplit - Splits a string into an array using the specified delimeter
 * @str: The string to split
 * @delim: The delimeter to split by
 * Return: NULL terminated Array of strings
 */

char **_strsplit(char *str, char delim)
{
	char **string_arr;
	char *newstr;
	unsigned int delim_count = 0;
	unsigned int j = 0, L;
	unsigned int start_sp, end_sp;

	delim_count = count_character(str, delim);
	string_arr = malloc(sizeof(char *) * (delim_count + 2));

	L = 0;
	while (str[j] != '\0')
	{
		if (str[j] != delim)
		{
			start_sp = j;
			while (str[j + 1] != delim)
			{
				if (str[j + 1] == '\0')
					break;
				j++;
			}
			end_sp = j;

			newstr = build_str(str, start_sp, end_sp);
			/*new string created using start_sp and end_sp*/
			string_arr[L] = newstr; /*Adds string to an array*/
			L++;
		}
		j++;
	}
	string_arr[L] = NULL;
	return (string_arr);
}
