#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#define O_RDONLY         00
#define O_WRONLY         01
#define O_RDWR           02

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
