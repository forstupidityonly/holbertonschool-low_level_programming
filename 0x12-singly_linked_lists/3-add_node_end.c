#include "lists.h"
/**
  * add_node_end - what u tink betty
  * @head: head
  * @str: string
  * Return: new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tail;
	int i = 0;

	if (!(head && str))
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	while (str[i])
		i++;
	new->len = i;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = new;
	return (new);
}
