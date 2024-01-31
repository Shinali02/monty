#include "monty.h"
/**
 * f_pall - It prints the stack.
 * @head: It is the stack head.
 * @counter: No used.
 * Return: No return, NULL.
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
