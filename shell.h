#ifndef SHELL_H
#define SHELL_H
/*Headers*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/wait.h>
/*functions*/
size_t _strlen(const char *str);
void to_print(const char *the_forma);
char *_fgets(char *str_t, int size_t, int fi_des);
size_t _strcspn(const char *str_1, const char *str_2);
int to_exec_command(const char *the_command, char *const args[]);
int to_read_command(char *the_command, size_t the_size);
int _strcmp(const char *str_1, const char *str_2);
char *_strtok(char *the_str, const char *delm);
char* _strncpy(char *desta, const char *the_source, size_t num);
#endif
