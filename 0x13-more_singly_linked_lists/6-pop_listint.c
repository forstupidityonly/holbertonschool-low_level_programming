#include "lists.h"
/**
  * pop_listint - delete head
  * @head: head
  * Return: info
  */
int pop_listint(listint_t **head)
{
	listint_t *buff;
	int info = 0;

	if (!(*head))
		return (0);
	info += (*head)->n;
	buff = *head;
	*head = (*head)->next;
	free(buff);
	return (info);
}
