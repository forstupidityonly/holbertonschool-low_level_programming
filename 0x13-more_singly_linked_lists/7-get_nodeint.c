#include "lists.h"
/**
  * get_nodeint_at_index - node at index
  * @head: head
  * @index: inxed
  * Return: yes
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
