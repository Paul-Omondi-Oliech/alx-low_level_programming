#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)

		putchar(ch);

	putchar('\n');
	return (0);
}
