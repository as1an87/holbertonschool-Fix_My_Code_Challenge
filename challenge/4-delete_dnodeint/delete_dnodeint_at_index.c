#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *node_to_delete;
    unsigned int i;

    if (*head == NULL)
    {
        return (-1);
    }

    node_to_delete = *head;

    for (i = 0; i < index; i++)
    {
        if (node_to_delete == NULL)
        {
            return (-1);
        }
        node_to_delete = node_to_delete->next;
    }

    if (node_to_delete == NULL)
    {
        return (-1);
    }

    if (node_to_delete->prev)
    {
        node_to_delete->prev->next = node_to_delete->next;
    }
    else
    {
        *head = node_to_delete->next;
    }

    if (node_to_delete->next)
    {
        node_to_delete->next->prev = node_to_delete->prev;
    }

    free(node_to_delete);

    return (1);
}

