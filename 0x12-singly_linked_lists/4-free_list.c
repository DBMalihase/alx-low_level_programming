#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: head var
 */

void free_list(list_t *head)
{
	list_t *temporary;

	while (head != NULL)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}

