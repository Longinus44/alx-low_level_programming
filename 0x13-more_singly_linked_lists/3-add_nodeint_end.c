#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head:pointer to the last node
 * @n: new node data
 *
 * Return:  address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newdata;
	listint_t *first = *head;

	newdata = malloc(sizeof(listint_t));

	if (!newdata)
		return (NULL);

	newdata->n = n;
	newdata->next = NULL;

	if (*head == NULL)
	{
		*head = newdata;
		return (newdata);
	}

	while (first->next)
	{
		first = first->next;
	}
	first->next = newdata;
	return (newdata);
}
