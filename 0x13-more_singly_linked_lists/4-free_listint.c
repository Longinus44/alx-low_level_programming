#include "lists.h"

/**
 * free_listint - function that frees listint_t list
 * @head: listint to be freed
 *
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
