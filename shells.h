#ifndef _SHELLS_H_
#define _SHELLS_H_

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>

int execute_command(char *pathname, char *command,
		char **linebuffer, char ***splitted_str,
		char **argv, char **env);
int launch(char **argv, char **env);
int command_check(char *pathname, char *command);
int count_character(char *str, char c);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
char *path_to_cmd(char *command);
char *_strcat(char *dest, char *src);
char *build_str(char *str, unsigned int start_sp, unsigned int end_sp);
char **_strsplit(char *str, char delim);
char *_strcpy(char *dest, char *src);
unsigned int _strlen(char *s);
unsigned int _puts(char *s);
void free_array(char **arr);
void exit_f(char **env);
void env_f(char **env);

typedef void (*builtin_func)(char **env);
builtin_func get_builtin_func(char *name);

/**
 * struct builtin_s - Builtin function struct
 * @function_name: Name of builtin function
 * @function_call: Function to be called
 */
typedef struct builtin_s
{
	char *function_name;
	void (*function_call)(char **env);
} builtin_f;

#endif
