#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 *Return: 1 (success)
 *On error return -1, and set an error number appropriately
 */
int Putchar(char c)
{
	return (write(1, &c, 1));
}
