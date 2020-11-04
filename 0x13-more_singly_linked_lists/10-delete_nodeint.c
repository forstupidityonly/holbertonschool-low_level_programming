#include "lists.h"
/**
  * delete_nodeint_at_index - what u think
  * @head: head
  * @index: delete node
  * Return: 1 -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *spot;
	listint_t *buff = NULL;

	if (!(head && *head))
		return (-1);
	spot = *head;
	if (index == 0)
	{
		buff = spot;
		*head = spot->next;
		free(buff);
		return (1);
	}
	else
		for (i = 0; i < (index - 1); i++)
		{
			if (spot->next)
				spot = spot->next;
			else
				return (-1);
		}
	buff = spot->next;
	spot->next = buff->next;
	free(buff);
	return (1);
}
