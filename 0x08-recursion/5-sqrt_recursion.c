#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be found
 * Return: 0 on success or return negative -1
 * for a number without a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n != n * n)
		return (-1);
	if (n == n * n)
		return (1);
	return (_sqrt_recursion(n));
			}
/**
 * actual_sqrt_recursion - finds the natural square root of a number
 * @n: number whose square root is to be found
 * @i: the iterator
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
