#include "main.h"

/**
* _strlen_recursion - return
* the lenght of a string
* @s: a string
* Return: the lenght of the
* string
*/

int _strlen_recursion(char *s)
{
int i = 0;
int number = 0;

if (*(s + i) == '\0')
{
number = 0;
}

else
{
i++;
number = (_strlen_recursion((s + i)) + 1);

}

return (number);
}
