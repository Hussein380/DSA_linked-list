#include "lists.h"
#include <stdlib.h>
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == N:wULL)
		return (NULL);
	temp = head;
	while(temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count ++;
		temp = temp->next;
	}
	return (NULL);
}
