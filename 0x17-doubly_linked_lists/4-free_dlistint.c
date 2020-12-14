#include "lists.h"
/**
  * free_dlistint - free
  * @head: head
  * Return: no
  */
void free_dlistint(dlistint_t *head)
{
dlistint_t *elements;

while (head)
{
elements = head;
head = head->next;
free(elements);
}
}
