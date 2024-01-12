#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to head
 * Return: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
