#include "lists.h"
#include <stdlib.h>

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while ( current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
