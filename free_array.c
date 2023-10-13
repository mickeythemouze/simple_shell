#include "shells.h"

/**
 * free_array - Free all the memory occupied by a NULL terminated array
 * @arr: The array to free
 *
 * Return: void
 */

void free_array(char **arr)
{
	unsigned int j = 0;

	for (j = 0; arr[j] != NULL; j++)
		free(arr[j]);
	free(arr[j]);
	free(arr);
}
