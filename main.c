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
		printf("%s", arguments->line);
	}	

	return (0);
}
