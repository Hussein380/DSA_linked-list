#include "lists.h"
#include <stdio.h>
#include "stddef.h"
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
