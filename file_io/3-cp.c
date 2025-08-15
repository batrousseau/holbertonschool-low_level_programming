
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


/**
 * ff_error_handler - deals with errors regarding
 * the file we try to copy from
 * @n: int coming from an operation of the file
 * @filename: name of the file we are testing
 * Return: nothing
 */

void ff_error_handler(int n, char *filename)
{
	if (n == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
	}
}

/**
 * ft_error_handler - deals with errors regarding
 * the file we copy to
 * @n: int coming from an operation of the file
 * @filename: name of the file we are testing
 * Return: nothing
 */

void ft_error_handler(int n, char *filename)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * closure_error_handler - deals with errors regarding
 * closure operation
 * @n: int coming from the operation of the file
 * @fd: file descriptor we are testing
 * Return: nothing
 */

void closure_error_handler(int n, int fd)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

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
	ff_error_handler(open_ff_result, file_from);

	open_ft_result = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	ft_error_handler(open_ft_result, file_to);

	for (i = 0; read_result != 0; i++)
	{
		read_result = read(open_ff_result, buff, 1024);
		ff_error_handler(read_result, file_from);
		if ((read_result != -1 || read_result != 0))
		{
		write_result = write(open_ft_result, buff, read_result);
		ft_error_handler(write_result, file_to);
		}
	}

	close_ff_result = close(open_ff_result);
	closure_error_handler(close_ff_result, open_ff_result);

	close_ft_result = close(open_ft_result);
	closure_error_handler(close_ft_result, open_ft_result);

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
