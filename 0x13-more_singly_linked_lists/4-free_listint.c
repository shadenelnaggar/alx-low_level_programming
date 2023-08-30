#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: first pointer
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
