#include "main.h"
/**
* prime_helper - add recursive variables
* to make is_prime_number works
* @n: the number to check
* @i: a variable to help
* Return: we'll see when coding
*/

int prime_helper(int n, int i)
{
int result = -1;

if (n < 0)
{
result = 0;
return (result);
}

if (n == 1)
{
result = 0;
return (result);
}

if (n / i == 1 && n == i)
{
result = 1;
return (result);
}

if (n / i != n && n % i == 0)
{
result = 0;
return (result);
}

else
{
result = prime_helper(n, (i + 1));
return (result);
}

}

/**
* is_prime_number - check if prime number
* @n: the number to check
* Return: 1 if prime, 0 if not
*/



int is_prime_number(int n)
{

return (prime_helper(n, 1));

}
