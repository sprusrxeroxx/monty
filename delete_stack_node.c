#include "monty.h"

/**
 *
 *
 *
 *
 */

void delete_stack_node(void)
{
	stack_t *tmp;

	tmp = arguments->head;
	arguments->head = tmp->next;
	free(tmp);
}
