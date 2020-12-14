#include "lists.h"
/**
  * add_dnodeint_end - add noed end
  * @head: head
  * @n: num
  * Return: added node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *add = malloc(sizeof(dlistint_t));
dlistint_t *now;

if (!head || !add)
return (NULL);
add->n = n;
add->next = NULL;
if (*head == NULL)
{
add->prev = NULL;
*head = add;
}
else
{
now = *head;
while (now->next)
{
now = now->next;
}
now->next = add;
add->prev = now;
}
return (add);
}
