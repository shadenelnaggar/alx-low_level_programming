#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: first pointer
 * Return: none
*/

void free_listint2(listint_t **head)
{
	listint_t *nd, tmp;

	if (!head)
		return;

	nd = *head;
	while (nd)
	{
		tmp = nd;
		nd = nd->next;
		free(tmp);
	}
	*head = NULL;
}
