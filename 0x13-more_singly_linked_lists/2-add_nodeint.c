#include "lists.h"

/**
 * nodeint - adds a new nodesat the beginning
 * @head: pointer header
 * @n: int data type
 * Return: the new address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)

		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
