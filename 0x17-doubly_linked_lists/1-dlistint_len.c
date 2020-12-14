#include "lists.h"
/**
  * dlistint_len - return len
  * @h: head
  * Return: Count
  */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h)
{
h = h->n;
count++;
}
return (count);
}
