#include "lists.h"
/**
  * dlistint_len - return len
  * @h: head
  * Return: Count
  */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

while (h)
{
h = h->next;
count += 1;
}
return (count);
}
