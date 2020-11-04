#include "lists.h"
/**
  * insert_nodeint_at_index - comeon
  * @head: head
  * @idx: index
  * @n: new
  * Return: yes
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *buff;
	listint_t *new_node;
	unsigned int i;

	if (!head)
		return (NULL);
	buff = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = buff;
		*head = new_node;
		return (*head);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (buff)
			buff = buff->next;
		else
			return (NULL);
	}
	new_node->next = buff->next;
	buff->next = new_node;
	return (new_node);
}
