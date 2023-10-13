#include "shells.h"

/**
 * _strncpy - Copies the characters in src into dest
 * @dest: Pointer to the string to be copied to
 * @src: Pointer to the source to be copied from
 * @n: the number of bytes to copy
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (src[j] && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
