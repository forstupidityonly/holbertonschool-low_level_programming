#include "lists.h"
/**
  * sum_listsint - all data
  * @head: head
  * Return: sum or 0
  */
int sum_listsint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
