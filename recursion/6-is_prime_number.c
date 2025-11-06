#include "main.h"

/**
*_prime_helper - Checks if n is divisible by i recursively
*@n: Number to check
*@i: Iterator
*
*Return: 1 if prime, 0 otherwise
*/
int _prime_helper(int n, int i)
{
if (n % i == 0)
return (0);
if (i * i > n)
return (1);
return (_prime_helper(n, i + 1));
}

/**
*is_prime_number - Checks if a number is prime
*@n: Number to evaluate
*
*Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_prime_helper(n, 2));
}
