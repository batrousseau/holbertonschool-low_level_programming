#include "main.h"
#include <stdio.h>
/**
* int_to_string - convert int to a string
* @n : the string to convert
* Return: a string
*/

char int_to_string(int n)
{
int i = 0;
int number = n;
int lenght = 0;
char s[6];

/*Get int lenght and past the int */
for (i = 0; number != 0; i++)
{
s[i] = (number % 10 + 48);
number = number / 10;
}
lenght = lenght + i;
s[lenght + 1] = '\0';

return (s[0]);

}




/**
* main - multiplies two numbers
* @argc: number of arguments (2)
* @argv: array of arguments
* Return: result of multiplication
*/


int main( int argc, char *argv[])
{
/*int i = 0;*/
int arg1 = *argv[1];
int arg2 = *argv[2];
int result = arg1 * arg2;
/*char s[6] = int_to_string(result);*/

printf("This doesn't serve anything %d\n", argc);
printf("Result is %d\n", int_to_string(result));
/**
*if (argc != 2)
*{
*_putchar(69);
*_putchar(114);
*_putchar(114);
*_putchar(11);
*_putchar(114);
*_putchar(10);
*return (1);
*}

*else
*{
*	for (i = 0; *(s + i) != '\0'; i++)
*	{
*	_putchar(*(s + i));
*	}
*
*
*/_putchar(10);
return (0);


}
