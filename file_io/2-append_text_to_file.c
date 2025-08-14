#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * get_lenght - get the lenght of the text to insert
 * @s: string to count
 * Return: number of char to print
 */

int get_lenght(char *s)
{
	int i = 0;
	int result = 0;

	for (i = 0; *(s + i) != '\0' ; i++)
	{
	}
	result = i;
	return (result);
}

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to append text to
 * @text_content: text to append to the file
 * Return: 1 if success, - 1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_result = 0;
	int write_result = 0;
	int text_lenght = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	open_result = open(filename, O_RDWR | O_APPEND);
	if (open_result == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	text_lenght = get_lenght(text_content);
	write_result = write(open_result, text_content, text_lenght);
	if (write_result == -1)
	{
		return (-1);
	}
	close(open_result);

	return (1);
}
