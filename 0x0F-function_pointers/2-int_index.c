#include "function_pointers.h"
/**
 * int_index - returns the place index if comparision is true, else -1
 * @array: this is the array to pass
 * @size: size of the elements in the array
 * @cmp: pointer to function of the three
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}