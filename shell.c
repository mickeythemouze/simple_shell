#include "shells.h"
#include <stdio.h>

/**
 * main - Enty point
 * @argc: Arguments count
 * @argv: Arguments from terminal
 * @env: Environment
 * Return: Always 0
 */

int main(int argc, char **argv, char **env)
{
	int ret_value;

	if (argc != 1)
	{
		_puts("Usage :");
		_puts(argv[0]);
		_putchar('\n');
		return (1);
	}
	while (EOF)
	{
		ret_value = launch(argv, env);
		if (ret_value == 5)
			return (0);
		if (ret_value)
			return (ret_value);
	}
	return (0);
}
