#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name using pointer to a function
 * @name: string to add
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
}
