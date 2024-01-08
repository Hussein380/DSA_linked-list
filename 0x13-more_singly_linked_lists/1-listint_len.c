#include "lists.h"

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
