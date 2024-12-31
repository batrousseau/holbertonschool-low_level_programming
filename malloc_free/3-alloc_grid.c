#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* alloc_grid - create a 2 dimension array
* of integers
* @width: number of spots in one raw
* @height: number of sports in one column
* Return: pointer to the array
*/


int **alloc_grid(int width, int height)
{
int i = 0;
int j = 0;
int **a = malloc((height * 4));

if (a == NULL)
{
free (a);
return (NULL);
}

for (i = 0; i < height; i++)
{
a[i] = malloc(width * 4);
	if (a[i] == NULL)
	{
	free (a);
	return (NULL);
	}
}

for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
	a[i][j] = 0;
	}
}

return (a);

}
