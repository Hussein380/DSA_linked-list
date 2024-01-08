#include "lists.h"
#include <stdlib.h>
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	/*stores  value for the newNode and set next to NULL*/
	new_node->n = n;
	new_node->next = NULL;
	/*if the ;list is empty, make the new_node the head*/
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
		/*traverse to the end and append the new_node */
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);


}

