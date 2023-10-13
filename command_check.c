#include "shells.h"
#include <stdio.h>
#include <string.h>

/**
 * command_check - check if command exists
 * @pathname: path to directory
 * @command: command to be checked
 * Return: 1 (success), 0 (fail/cannot be found)
 */

int command_check(char *pathname, char *command)
{
	DIR *dir_stream;
	struct dirent *dir_entry;
	int isequals;

	dir_stream = opendir((const char *) pathname);
	if (dir_stream == NULL)
		return (0);
	dir_entry = readdir(dir_stream);
	if (dir_entry == NULL)
		return (0);
	while (dir_entry != NULL)
	{
		isequals = strcmp(command, dir_entry->d_name);
		if (isequals == 0)
		{
			closedir(dir_stream);
			return (1);
		}
		dir_entry = readdir(dir_stream);
	}
	closedir(dir_stream);
	return (0);
}
