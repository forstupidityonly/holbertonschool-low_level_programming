#include "lists.h"
/**
  * reverse_listint -reverce
  * @head: head
  * Return: yes
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL, *b = NULL;

	while (*head)
	{
		b = (*head)-next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = b;
	return (*head);
}
