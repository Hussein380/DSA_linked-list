#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert node at a given position
 * @h: double pointer to the head
 * @idx: index of the list where new node should be added
 * @n: number the node should have
 * Return:NULL if not possible, or nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node =  malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 0;

	/*ccheck if the memory allocation for the new_node was successsfull*/
	if (new_node == NULL)
		return NULL;
	/*initialize new_node with provided value*/
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	/*check for case where idx is zero, at that point we add it at the beginning*/
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	/*traverse the list to the specified index or the end of the list*/
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	/*if the index is beyond the end of list , free allocated memory and return NULL*/
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*if the index is at the end or beyond insert it at the end*/
	if (current->next == NULL)
	{
		return ((add_dnodeint_end(h, n)));
	}
	/*Insert the new node into the list at specified index:*/
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
