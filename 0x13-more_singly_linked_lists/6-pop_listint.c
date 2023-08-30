#include "lists.h"

/**
 * pop_listint -  function that deletes the head node
 * of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head:pointer to the first node in the list
 *
 * Return:the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int size;

	if (!head || !*head)
		return (0);

	size = (*head)->n;
	first = (*head)->next;
	free(*head);
	*head = first;

	return (size);
}
