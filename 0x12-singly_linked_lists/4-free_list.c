#include "lists.h"
/**
  * free_list - frees list
  * @head: head
  * Return: no
  */
void free_list(list_t *head)
{
	list_t *elements;

	while (head)
	{
		elements = head;
		head = head->next;
		free(elements->str);
		free(elements);
	}
}
