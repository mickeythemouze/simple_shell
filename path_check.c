#include "shells.h"
#include <stdio.h>
#include <string.h>

/**
 * path_to_cmd - check if a command is a path
 * @command: command that is checked
 * Return: next command
 */
char *path_to_cmd(char *command)
{
	if (*command == '/')
	{
		command++;
		while (*command != '/')
			command++;
		command++;
		return (command);
	}
	return (NULL);
}
