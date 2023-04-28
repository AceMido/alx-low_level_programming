#include "lists.h"
/**
 * free_list - free a linked list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *node = head;
	list_t *next;

	if (!head)
		return;
	while (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
