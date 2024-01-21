#include "monty.h"

arg_t *arguments = NULL;

/**
 * main - Main function
 * @argc: The number of CLI arguments 
 * @argv: A pointer array with CLI args
 * Description: print alphabets in lowercase using putchar
 *
 * Return: Success(0)
 */

int main(int argc, char **argv)
{
	size_t n = 0;

	validate_arguments(argc);
	initialize_arguments();
	get_stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		arguments->line_number += 1;
		tokenize_line();
		get_instruction();
		run_instruction();
		free_tokens();
	}
	close_stream();
	free_arguments();

	return (0);
}
