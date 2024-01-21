#include "monty.h"

/**
 *
 *
 *
 */

void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	delete_stack_node();
	arguments->stack_length -= 1;
}
