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
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: content of the text to insert into the newly
 * created file
 * Return: 1 ok, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int open_result = 0;
	int write_result = 0;
	char *buff = NULL;
	size_t txt_lght = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	/**
	 * Tricky here : if file don't exist, create and give rw user permissions
	 * if already created, gave read and write and truncate but don't change
	 * permissions
	 */
	open_result = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (open_result == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	txt_lght = get_lenght(text_content);
	write_result = write(open_result, text_content, txt_lght);
	if (write_result == -1)
	{
		return (-1);
	}
	free(buff);
	close(open_result);
	return (1);

}
