#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: number of nodes
 *
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
