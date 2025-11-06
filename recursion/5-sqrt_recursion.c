#include "main.h"

/**
*_sqrt_helper - Helps find natural square root recursively
*@n: Number to find the square root of
*@i: Iterator
*
*Return: Natural square root or -1
*/
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}

/**
*_sqrt_recursion - Returns the natural square root of a number
*@n: Number to evaluate
*
*Return: Natural square root, -1 if none
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
