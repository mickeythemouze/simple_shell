#include "shells.h"
#include <string.h>

/**
 * get_builtin_func - Get the builtin function with the specified name
 * @name: Name of builtin function
 * Return: The builtin function
 */

builtin_func get_builtin_func(char *name)
{
	int j;
	builtin_f b_func[] = {
		{"exit", exit_f}
	};

	for (j = 0; j < 1; j++)
	{
		if (strcmp(b_func[j].function_name, name) == 0)
		{
			return (b_func[j].function_call);
		}
	}

	return (NULL);
}
