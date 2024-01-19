#include "monty.h"

/**
 * tokenize_line - Tokenizes line read
 */

void tokenize_line(void)
{
	int i = 0;
	char *delim = " \n", *token = NULL, *linecpy = NULL;

	linecpy = malloc(sizeof(char) * (strlen(arguments->line) + 1));
	strcpy(linecpy, arguments->line);
	arguments->n_tokens = 0;
	token  =strtok(linecpy, delim);
	while(token)
	{
		arguments->n_tokens += 1;
		token = strtok(NULL, delim);
	}
	arguments->tokens = malloc(sizeof(char *) * (arguments->n_tokens + 1));
	strcpy(linecpy, arguments->line);
	token = strtok(linecpy, delim);
	while(token)
	{
		arguments->tokens[i] = malloc(sizeof(char) *
				(strlen(token) + 1));
		if (arguments->tokens[i] == NULL)
			malloc_failed();
		strcpy(arguments->tokens[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	arguments->tokens[i] = NULL;
	free(linecpy);
}
