#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: pointer to the first node in the list
 * @idx: index where the new node is inserted
 * @n: data to insert in the new given node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newdata;
	listint_t *first = *head;

	newdata = malloc(sizeof(listint_t));
	if (!newdata || !head)
		return (NULL);

	newdata->n = n;
	newdata->next = NULL;

	if (idx == 0)
	{
		newdata->next = *head;
		*head = newdata;
		return (newdata);
	}

	for (i = 0; first && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newdata->next = first->next;
			first->next = newdata;
			return (newdata);
		}
		else
			first = first->next;
	}

	return (NULL);
}
