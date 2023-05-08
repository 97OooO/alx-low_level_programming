#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int creat_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
int elf_header(int argc, char *argv[]);

#endif