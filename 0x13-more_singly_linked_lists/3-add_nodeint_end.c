#include "lists.h"
/**
  * add_nodeint_end - add node end
  * @head: head
  * @n: node
  * Return: yes
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *buff;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	buff = *head;
	while (buff->next)
		buff = buff->next;
	buff->next = new_node;
	return (new_node);
}
