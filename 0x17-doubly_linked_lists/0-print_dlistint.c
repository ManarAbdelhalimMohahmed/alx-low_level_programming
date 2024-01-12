#include "lists.h"

/**
 * print_dlistint - print the linkedlsit
 * @h:pointer to head
 * Return: number of nods.
 */

size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
