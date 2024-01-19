#include "monty.h"

/**
 * invalid_instruction - Handles unknown instruction error.
 */

void invalid_instruction(void)
{
	dprintf(2, "L%d: unknown instruction %s\n", arguments->line_number, arguments->tokens[0]);
			close_stream();
			free_tokens();
			free_arguments();
			exit(EXIT_FAILURE);
}

/**
 * get_instruction - Matches instruction to 1st token in input
 */

void get_instruction(void)
{
	int i = 0;

	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall}, {"sub", &sub},
		{"div", &_div}, {"mul", &mul},
		{"rot1", &rot1}, {"rotr", &rotr},
		{"stack", &stack}, {"queue", &queue},
		{"pstr", &pstr} {"pchar", &pchar},
		{"mod", &mod}, {NULL, NULL}};
	
	if (arguments->n_tokens == 0)
		return;

	for (;instructions[i].opcode != NULL;i++)
	{
		if (strcmp(instructions[i].opcode, arguments->tokens[0] == 0))
				{
					arguments->instruction->opcode = instructions[i].opcode;
					arguments->instruction->f = instructions[i].f;
					return;
					}
	}

	invalid_instruction();
}
