#include "shells.h"

/**
 * _puts - Prints an array of characters
 * @s: Array of characters
 * Return: Number of bytes printed
 */

unsigned int _puts(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
