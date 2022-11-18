#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio/h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

void prompt(void);
void handle(int signals);
void _EOF(char *buffer);
void shell_exit(char **command);

#endif
