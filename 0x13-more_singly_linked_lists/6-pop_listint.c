#include "lists.h"
#include <stdlib.h>
int pop_listint(listint_t **head)
{
	listint_t *temp; *data


	if (*head == NULL)
		return (NULL);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
