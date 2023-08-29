#include "lists.h"

/**
 * print_listint - a function that prints all the
 * elements of a listint_t list.
 * @h: first nde pointer
 * Return: list size
*/

size_t print_listint(const listint_t *h)
{
	size_t ctr = 0;

	if (h == NULL)
		return (0);

	for (ctr; h != NULL; ctr++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (ctr);
}
