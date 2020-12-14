#include "lists.h"
/**
  * get_dnodeint_at_index - get n node
  * @head: head
  * @index: the node to get
  * Return: a @node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
if (!head)
return (NULL);
while (i < index)
{
if (head->next)
head = head->next;
else
return (NULL);
i++;
}
return (head);
}
