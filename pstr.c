#include "monty.h"

/**
 *
 *
 *
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void) stack;
	(void) line_number;

	tmp = arguments->head;

	while (tmp != NULL)
	{
		if (tmp->n <= 0 || tmp->n > 127)
			break;
		printf("%c", tmp->n);
		tmp = tmp->next;
	}

	printf("\n");
}
