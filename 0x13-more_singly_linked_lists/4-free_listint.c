#include "lists.h"
/**
  * free_listint - free listint
  * @head: head
  * Return: no
  */
void free_listint(listint_t *head)
{
	list_t *yeet;

	if (!head)
		return;
	while (head)
	{
		yeet = head;
		head = head->next;
		free(yeet);
	}
}
