#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: a pointer to the head
 * @index: index to return
 * Return: if node does not exist , return Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if ( i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
