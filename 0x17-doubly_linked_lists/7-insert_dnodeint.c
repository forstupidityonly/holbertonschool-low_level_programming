#include "lists.h"
/**
  * insert_dnodeint_at_index - inser node @ index
  * @h: head
  * @idx: index
  * @n: int to put in node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current;
dlistint_t *new = malloc(sizeof(dlistint_t));

if (!h || !new)
return (NULL);
current = *h;
new->n = n;
if (idx == 0)
{
new->prev = NULL;
new->next = current;
if (current)
{
current->prev = new;
}
*h = new;
return (*h);
}
for (; current; current = current->next, idx--)
{
if (idx == 1)
{
new->prev = current;
new->next = current->next;
new->next->prev = new;
current->next = new;
return (new);
}
}
free(new);
return (NULL);
}
