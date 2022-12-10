#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio/h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

/* shell_init.c */

void prompt(void);
void handle(int signals);
void _EOF(char *buffer);
void shell_exit(char **command);

/* create_child.c */

void create_child(char **command, char *name, char **env, int cicles);
int change_dir(const char *path);

/* execute.c */

void execute(char **command, char *name, char **env, int cicles);
void print_env(char **env);
char **_getPATH(char **env);
void msgerror(char *name, int cicles, char **command);

/* tokening.c */

char **tokening(char *buffer, const char *s);

/* free_memory.c */

void free_dp(char **command);
void free_exit(char **command);

/* aux_func.c */

int _strcmp(char *s1, char *s2);
unsigned int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);

#endif
