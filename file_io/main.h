#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int get_lenght(char *s);
int append_text_to_file(const char *filename, char *text_content);
int cp_file (char *file_from, char *file_to);
void ff_error_handler(ssize_t n, char *filename);
void ft_error_handler(ssize_t n, char *filename);
void closure_error_handler(ssize_t n, int fd);
#endif
