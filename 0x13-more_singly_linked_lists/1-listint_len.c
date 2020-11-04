#include "lists.h"
/**
  * listint_len - num of enelemts
  * @h: head
  * Return: yes
  */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	if (!h)
		return (0);
	while (h)
	{
		elements += 1;
		h = h->next;
	}
	return (elements);
}
