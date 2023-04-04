#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *tmp = head;

	/*loop to calculate sum of all data*/
	while (tmp)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
