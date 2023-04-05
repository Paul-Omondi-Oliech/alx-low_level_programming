#include "main.h"
/**
 * factorial - prints the factorial of a number
 * @n: an integer whose factorial is to be printed
 * Return: 0 on success otherwise -1 is returned
 *  with an errno assigned appropriately
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
			}

