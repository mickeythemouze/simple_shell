#include "shells.h"

/**
 * _strcpy - Copies the characters in src into dest
 * @dest: Pointer to the string destignation
 * @src: Pointer to the source to be copied from
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	unsigned int j;

	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
