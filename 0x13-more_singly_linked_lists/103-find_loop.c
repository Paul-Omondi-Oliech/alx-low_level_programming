#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search from
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *second = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (second && fast && fast->next)
	{
		fast = fast->next->next;
		second = second->next;
		if (fast == second)
		{
			second = head;
			while (second != fast)
			{
				second = second->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
