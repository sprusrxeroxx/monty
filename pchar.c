#include "monty.h"

/**
 *
 *
 *
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp = arguments->head;

	if (tmp->n < 0 || tmp->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
                free_all_args();
                exit(EXIT_FAILURE);
	}
	
	printf("%c\n", tmp->n);
}
