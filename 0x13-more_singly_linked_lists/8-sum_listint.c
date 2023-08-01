#include "lists.h"
/**
 * sum_listint - calcultes the sum of all the data in a listint_t list
 * @head: first node in the linkrd list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n,
		       	head = head->next);

	return  (sum);
}
