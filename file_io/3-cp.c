
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


/**
 * cp_file - copy one file to another
 * @file_from: file to copy
 * @file_to: destination file
 * Return: 98 if can't read or open file from,
 * 99 if can't open or write into file_to
 * 100 if can't close one of the files
 */
int cp_file(char *file_from, char *file_to)
{
	int i = 0, open_ff_result = 0, open_ft_result = 0, read_result = 4,
	write_result = 0, close_ff_result = 0, close_ft_result = 0;
	char buff[1024];

	open_ff_result = open(file_from, O_RDONLY);
	if (open_ff_result == -1)
	{
	dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from);
	exit(98);
	}
	open_ft_result = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (open_ft_result == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to file %s\n", file_to);
		exit(99);
	}
	for (i = 0; read_result != 0; i++)
	{
		read_result = read(open_ff_result, buff, 1024);
		if (read_result == -1)
		{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from);
		exit(98);
		}
	write_result = write(open_ft_result, buff, read_result);
		if (write_result == -1)
		{
		dprintf(STDERR_FILENO, "Can't write to file %s\n", file_to);
		exit(99);
		}
	}
		close_ff_result = close(open_ff_result);
		if (close_ff_result == -1)
		{
			dprintf(STDERR_FILENO, "Can't close fd %d\n", open_ff_result);
			exit(100);
		}
	close_ft_result = close(open_ft_result);
	if (close_ft_result == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", open_ft_result);
		exit(100);
	}
	return (1);
}

/**
 * main - check the code
 * @ac: argument count
 * @av: arguments values
 * Return: Always 0.
 */
int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}
