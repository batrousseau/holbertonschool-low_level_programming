#include "main.h"

/**
* main - prints all arguments
* it receives
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/


int main(int argc, char *argv[])
{
int i = 0;
int j = 0;

for (i = 0; i < argc; i++)
{
	for (j = 0; *(argv[i] + j) != '\0'; j++)
	{
	_putchar(*(argv[i] + j));
	}
_putchar(10);
}

return (0);

}
