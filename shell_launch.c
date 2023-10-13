#include "shells.h"
#include <stdio.h>
#include <string.h>

/**
 * launch - intiates the shell prompt
 * @argv: Arguments from main funcion
 * @env: Environment
 * Return: Integer as (success) / error codes
 */

int launch(char **argv, char **env)
{
	char *linebuffer, *command, **splitted_str;
	char pathname[] = "/bin/";
	char prompt[] = "#myshellpro$";
	builtin_func builtin_function;
	size_t characters, proj;

	characters = 0;
	linebuffer = NULL;
	if (isatty(0))
		_puts(prompt);
	proj = getline(&linebuffer, &characters, stdin);
	if (proj == (size_t)-1)
	{
		free(linebuffer);
		return (5);
	}
	linebuffer[proj - 1] = '\0';
	splitted_str = _strsplit(linebuffer, ' ');
	command = splitted_str[0];
	if (path_to_cmd(command) != NULL)
		command = path_to_cmd(command);
	builtin_function = get_builtin_func(command);
	if (builtin_function)
	{
		free_array(splitted_str);
		free(linebuffer);
		builtin_function(env);
	}
	if (command_check(pathname, command) == 1)
	{
		execute_command(pathname, command,
				&linebuffer, &splitted_str,
				argv, env);
		free_array(splitted_str);
	} else
	{
		printf("%s: command not found\n", argv[0]);
	}
	free(linebuffer);
	return (0);
}
