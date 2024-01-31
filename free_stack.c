#include "monty.h"
/**
* free_stack - It frees a double linked list.
* @head: The head of a stack.
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
