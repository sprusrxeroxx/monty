#include "monty.h"

/**
 * validate_arguments - checks number of CLI args
 * @argc: The number of CLI args
 */

void validate_arguments(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
