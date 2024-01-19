
#include "monty.h"

/**
 *initialize_arguments - Initializes pointer to arg_s
 *
 */

void initialize_arguments()
{
	/**char *head;
	*int stack_length;
	*/

	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
		malloc_failed();

	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
		malloc_failed();

	arguments->stream = NULL;
	arguments->line = NULL;
	arguments->n_tokens = 0;
	arguments->line_number = 0;
}
