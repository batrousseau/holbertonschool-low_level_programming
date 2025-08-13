#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - print a file through stdout
 * @filename: name of the file
 * @letters: number of chars to print
 * Return: number of printed chars, -1 if failed
 */

size_t read_textfile(const char *filename, size_t letters)
{
	long int printed_char = 0;
	int fd = 0;
	int read_result = 0;
	char *buff = NULL;
	int close_control = 0;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc((letters) * sizeof(char));
	if (buff == NULL)
	{
		return (-1);
	}
	read_result = read(fd, buff, letters);
	if (read_result == -1)
	{
		return (-1);
	}
	printed_char = write(STDOUT_FILENO, buff, read_result);
	if (printed_char == -1)
	{
		return (-1);
	}
	free(buff);
	close_control = close(fd);
	if (close_control == -1)
	{
		return (-1);
	}
	return (printed_char);
}
