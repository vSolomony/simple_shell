#ifndef SHELL_H
#define SHELL_H
/*Headers*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/wait.h>
/*strings*/
size_t _strlen(const char *str);
char *_strncpy(char *desta, const char *the_source, size_t num);
int _strcmp(const char *str_1, const char *str_2);
size_t _strcspn(const char *str_1, const char *str_2);
char *_strtok(char *the_str, const char *delm);
/*interactive & non interactive*/
void interactive_SHELLMODE(void);
void noninteractive_SHELLMODE(void);
/*other functions*/
void check_input(char *line);
void to_print(const char *the_forma);
void to_exec_command(const char *args[]);
char *to_read_command(void);

#endif
