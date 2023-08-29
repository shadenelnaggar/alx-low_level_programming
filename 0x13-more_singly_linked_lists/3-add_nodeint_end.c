#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the
 * end of a listint_t list.
 * @head: first pointer
 * @n: data of new node
 * Return: ptr
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	listint_t *curr;

	if (!head || !n_node)
		return (NULL);

	n_node->next = NULL;
	n_node->n = n;
	if (!*head)
		*head = n_node;
	else
	{
		curr = *head;
		while (curr->next)
			curr = cuur->next;
		curr->next = n_node;
	}
	return (n_node);
}
