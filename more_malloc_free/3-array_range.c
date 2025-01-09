#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integer
* @min: the minimum value
* @max: the maximum value
* Return: pointer to array
*/

int *array_range(int min, int max)
{
int i = 0;
int j = 0;
int lenght = 0;
int *p;

if (min > max)
{
return (NULL);
}

/* Getting array lenght */

for (i = min; i <= max; i++)
{
j++;
}
lenght = j + 1;

p = malloc(lenght * sizeof(int));
if (p == NULL)
{
return (NULL);
}

for (i = min; i <= max; i++)
{
*(p + i) = i;
}

return (p);
}
