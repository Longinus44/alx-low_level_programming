#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: the number of elements
 *
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
