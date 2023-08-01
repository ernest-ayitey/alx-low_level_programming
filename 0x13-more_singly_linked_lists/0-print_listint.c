#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that print all the elements of listint_t list
 * @h: header pointer
 * Return: the nodes
 */
size_t print_listint(const listint_t *h)

{
	size_t count = 0;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
