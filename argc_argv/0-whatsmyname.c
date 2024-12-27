#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
* main - rewrite the name of the program
* @argc: number of argument take into account
* @argv: array of strings with arguments
* Return: 0 if all right
*/


int main(int argc, char *argv[])
{
int i = 0;

if (argc == 1)
{
	for (i = 0; *(argv[0] + i) != '\0'; i++)
	{
	_putchar(*(argv[0] + i));
	}
_putchar(10);
return (0);
}

return (-1);
}
