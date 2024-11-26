#include "main.h"
/**
* get_sign - compare two strings
* to determine wich is longer
* @s1 : the first string
* @s2 : the second string
* Return: an int
*/

int get_sign(char *s1, char *s2)
{

int i = 0;
int s1_lenght = 0;
int s2_lenght = 0;
int difference = 0;

/*Getting s1 lenght */
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
	}
	s1_lenght = i;
/*Getting s2 lenght */
	for (i = 0; *(s2 + i) != '\0'; i++)
	{
	}
	s2_lenght = i;

/* Comparing */
	if (s1_lenght == s2_lenght)
	{
	difference = 0;
	}

	else if (s1_lenght < s2_lenght)
	{
	difference = -1;
	}

	else if (s1_lenght > s2_lenght)
	{
	difference = 1;
	}
return (difference);
}

/**
* _strcmp - compares two string and give
* the ASCII value of the character making
* the difference
* @s1: the first string
* @s2: the second string
* Return: and int
*/
int _strcmp(char *s1, char *s2)
{
int comparison = get_sign(s1, s2);
int final_result = 0;
int j = 0;

if (comparison == 0)
{
final_result = comparison;
}

if (comparison > 0)
{
	for (j = 0; *(s1 + j) != '\0'; j++)
	{
	}
final_result = *(s1 + j) - 1
}

if (comparison < 0)
{

}
return (final_result);
}

