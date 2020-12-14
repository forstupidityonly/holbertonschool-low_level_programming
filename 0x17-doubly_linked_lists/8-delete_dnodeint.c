#include "lists.h"
/**
  * delete_dnodeint_at_index - delete node at index
  * @head: head
  * @index: index
  * Return: 1 or 0
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    dlistint_t *phree;

    if (head)
    {
        current = *head;
        if (index == 0)
        {
            if (!current)
                return (-1);
            *head = current->next;
            if (*head)
                (*head)->prev = NULL;
            free(current);
            return (1);
        }
        for (; current; current = current->next, index--)
        {
            if (index == 1)
            {
                phree = current->next;
                if (!phree)
                    break;
                current->next = phree->next;
                if (phree->next)
                    phree->next->prev = current;
                free(phree);
                return (1);
            }
        }
    }
    return (-1);
}
