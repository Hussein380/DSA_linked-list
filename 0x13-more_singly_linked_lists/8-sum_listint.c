#include "lists.h"
int sum_listint(listint_t *head)
{
	int count = 0;
	listint_t *temp = head;
	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
