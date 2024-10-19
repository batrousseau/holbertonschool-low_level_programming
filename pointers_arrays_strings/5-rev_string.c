#include "main.h"
/* more headers goes there */

/**
*swap_char - swaps the value of
* two characters
* @a : pointers to character a
* @b : pointers to character b
* Return : void
*/

void swap_char (char *a, char *b)

{
char temp = *a;
*a = *b;
*b = temp;
}

/**
* rev_string - reverse a string
* @s : a pointer to a string
* Return:nothing
*/

void rev_string(char *s)
{
int i = 0;
int k = 0;
/** Getting string lenght **/
for (i = 0; *(s + i) != 0; i++)
{
}

/* Swapping characters */
for (k = 0; k < i; i--, k++)
{
swap_char (s + k, s + i - 1);
}

}

