#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: address of first node ptr
 * Return: value of node deleted
*/

int pop_listint(listint_t **head)
{
	listint_t *nd;
	int n;

	if (!head || !*head)
		return (0);

	nd = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nd;
	return (n);
}
