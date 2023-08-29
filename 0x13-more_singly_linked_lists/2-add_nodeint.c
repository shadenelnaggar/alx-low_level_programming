#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a listint_t list.
 * @head: head pointer
 * @n: data
 * Return: new node pointer
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (!head || !n_node)
		return (NULL);

	n_node->next = NULL;
	n_node->n = n;
	if (*head)
		n_node->next = *head;
	*head = n_node;
	return (n_node);
}
