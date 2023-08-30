#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list.
 * @head: first node pointer
 * @index: node index
 * Return: pointer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nd;
	unsigned int n;

	for (nd = head, n = 0; nd && n < index; nd = nd->next, n++)
		;
	return (nd);
}
