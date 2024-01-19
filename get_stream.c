#include "monty.h"

/**
 * getting_stream_failed - Handles error for file read
 * @fileName: The name of the file 
 */
void getting_stream_failed(char *fileName)
{
	dprintf(2, "Error: Can't open file %s\n", fileName);
	/*free_arguments();*/
	exit(EXIT_FAILURE);
}

/**
 * get_stream - gets the stream for reading 
 * @fileName: Name of file 
 */
void get_stream(char *fileName)
{
	int fd;

	fd = open(fileName, O_RDONLY);
	if (fd == -1)
		getting_stream_failed(fileName);

	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		getting_stream_failed(fileName);
	}
}
