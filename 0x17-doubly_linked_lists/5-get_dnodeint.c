#include "lists.h"
/**
 * get_dnodeint_at_index - returns the 
 * nth node of the dlistint_t linked list
 * @head: the head of the list
 * @index: the index of the nth node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	j = 0;

	while (head != NULL)
	{
		if (j == index)
			break;
		head = head->next;
		j++;
	}

	return (head);
}
