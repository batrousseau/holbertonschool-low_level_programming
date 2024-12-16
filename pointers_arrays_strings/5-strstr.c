#include "main.h"
#include <stddef.h>
/**
* _strstr - locates a substring
* @haystack: string to look
* @needle:string to find
* Return: needle part of haystack
*
*/

char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
int first_char = 0;
char *p = NULL;

if (*(needle + i) == '\0')
{
return (haystack);
}


for (i = 0; *(haystack + i) != '\0'; i++)
{
	if (*(haystack + i) == *needle)
	{
	first_char = i;
		for (j = 0; *(haystack + first_char + j) == *(needle + j); j++)
		{
			if (*(needle + j) == '\0')
			{
			p = (haystack + i);
			return (p);
			}
		}
		return(p);
	}

}
return (p);


}
