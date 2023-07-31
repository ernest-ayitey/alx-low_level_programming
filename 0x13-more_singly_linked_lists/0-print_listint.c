#include "lists.h"
/**
 * @head: header for the pointer
 * print_listint: - function that print all the elements of listint_t list
 * Return: the nodes 
 */
size_t print_listint(const listint_t *h)

{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->i);
		h = h->next;
	}
	return (count);
}
