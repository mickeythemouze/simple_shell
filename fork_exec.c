#include "shells.h"
#include <stdio.h>
#include <string.h>

/**
 * execute_command - Fork et Execute
 * @pathname: Pathname
 * @command: Command to be executed
 * @linebuffer: Buffer for getline
 * @splitted_str: Splitted strings from line buffer
 * @argv: Main arguments
 * @env: Enviroment
 * Return: Integers
 */

int execute_command(char *pathname, char *command,
		    char **linebuffer, char ***splitted_str,
		    char **argv, char **env)
{
	pid_t child_pid;
	char *path;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror(argv[0]);
		free(*linebuffer);
		return (2);
	}

	if (child_pid == 0)
	{
		path = _strcat(pathname, command);
		if (execve(path, *splitted_str, env) == -1)
		{
			perror(argv[0]);
			free_array(*splitted_str);
			free(*linebuffer);
			return (2);

		}
	} else
	{
		wait(NULL);
	}
	return (0);
}
