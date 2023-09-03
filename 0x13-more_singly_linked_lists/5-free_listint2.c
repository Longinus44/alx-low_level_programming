#include "lists.h"

/**
 * free_listint2 - function that free listint
 * @head: the listint to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *data;

	if (head == NULL)
		return;

	while (*head)
	{
		data = (*head)->next;
		free(head);
		*head = data;
	}
	*head = NULL;
}
