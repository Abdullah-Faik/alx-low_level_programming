#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define or ||
#define is ==
#define is_not !=
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif