#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_nodeint_at_index - deletes a node
 * @head: linked list at head
 * @index: index pf deleted node
 * Return: Boolean
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old, *tmp;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	if (*head != NULL)
	{
		if (index == 0)
		{
			tmp = *head;
			*head = (*(head))->next;
			free(tmp);
			return (1);
		}
		old = *head;
		tmp = (*(head))->next;
		while (tmp != NULL)
		{
			if (i == index)
			{
				old->next = tmp->next;
				free(tmp);
				return (1);
			}
			old = tmp;
			tmp = tmp->next;
			i++;
		}
	}
	return (-1);
}
