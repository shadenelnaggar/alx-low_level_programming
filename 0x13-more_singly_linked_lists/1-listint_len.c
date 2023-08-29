#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: next node pointer
 * Return: list size
*/

size_t listint_len(const listint_t *h)
{
	size_t ctr = 0;

	while (h)
	{
		h = h->next;
		ctr++;
	}
	return (ctr);
}
