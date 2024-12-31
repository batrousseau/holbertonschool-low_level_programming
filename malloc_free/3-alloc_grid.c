#include "main.h"
#include <stdlib.h>

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
int **a = malloc(8 * height);

if (a == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
a[i] = malloc(8 * width);
	if (a[i] == NULL)
	{
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
