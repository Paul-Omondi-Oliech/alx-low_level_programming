#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be returned
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int longn = 0

	if (*s)
	{
		longn += _strlen_recursion(s + 1);
		longn++;
	}
	return (longn);
}
