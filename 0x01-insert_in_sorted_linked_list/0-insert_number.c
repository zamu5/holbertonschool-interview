#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**

 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *idx_node, *new_node;

	idx_node = *head;

	if (head == NULL && *head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == 0)
		return (NULL);

	new_node->n = number;
	new_node->next = NULL;

	if (*head == NULL || (*head)->n >= new_node->n)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (idx_node->next != NULL && idx_node->next->n < new_node->n)
		{
			idx_node = idx_node->next;
		}
		new_node->next = idx_node->next;
		idx_node->next = new_node;
	}
	return (new_node);
}