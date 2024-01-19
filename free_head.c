#include "monty.h"

/**
 *
 *
 *
 * 
 *
 */

void free_ehad(void)
{
	if (arguments->head)
		free_stack(arguments->head);

	arguments->head = NULL;
}
