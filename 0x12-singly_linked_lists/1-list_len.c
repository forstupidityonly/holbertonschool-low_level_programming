#include "lists.h"
/**
  * list_len - len of elements
  * @h: head
  * Return: num of elements
  */
size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h)
	{
		elements += 1;
		h = h->next;
	}
	return (elements);
}
