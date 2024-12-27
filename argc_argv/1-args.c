#include "main.h"

/**
* main - counts the number of arguments
* passed to the programm
* @argc: number of argument
* @argv: array of strings with arguments
* Return: 0;
*/


int main(int argc, char *argv[]__attribute__((unused)))
{
int count = argc;
_putchar((count - 1 + 48));
_putchar(10);
return (0);
}
