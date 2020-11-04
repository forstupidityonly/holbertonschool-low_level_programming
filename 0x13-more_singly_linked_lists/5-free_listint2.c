#include "lists.h"
/**
  * free_listint2 - free listint
  * @head: head
  * Return: no
  */
void free_listint2(listint_t **head)
{
	listint_t *buff;
	listint_t *yeet;

	if (!head)
		return;
	buff = *head;
	while (buff)
	{
		yeet = buff;
		buff = buff->next;
		free(yeet);
	}
	*head = NULL;
}
