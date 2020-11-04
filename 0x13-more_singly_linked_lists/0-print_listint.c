#include "lists.h"
/**
  * print_listint - print all elements
  * @h: the start of the list
  * Return: num of elements
  */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	if (!h)
		return (0);
	while (h)
	{
		elements += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}
