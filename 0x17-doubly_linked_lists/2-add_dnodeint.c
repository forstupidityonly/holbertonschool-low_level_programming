#include "lists.h"
/**
  * add_dnodeint - add a node at head of d list
  * @head: head
  * @n: int
  * Return: new ode
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t - *add = mallock(sizeof(dlistint_t));
if (!head || !add)
return (NULL);

add->n = n;
add-prev = NULL;

if (*head == NULL)
{
*head = add;
add->next = NULL;
}
else
{
add->next = *head;
(*head)->prev = add;
*head = add;
}
return (add);
}
