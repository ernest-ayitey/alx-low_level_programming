#ifndef _LISTS_H_
#define _LISTS_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct_listint_s - singly linked list
 * @i: integer
 * @next: singly linked list node structure
 * Description: singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
}
listint_t;
size_t print_listint(const listint_t *h);
#endif
