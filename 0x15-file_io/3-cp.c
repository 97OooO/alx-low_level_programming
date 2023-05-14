#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


/**
 * error_exit - prints an error message to stderr and exit
 * with a given error code
 * @code: it's automatically a code
 * @message: message given
 */
void error_exit (int code, const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(code);
}

/**
 * main - parses the command-line arguments and call the appropriate
 * functions to copy the file
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: return 0 on success.
 */
int main(int argc, char *argv[])
{
	char message[1024];
	int fd_to;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_tp");
	}

	char* file_from = argv[1];
	char* file_to = argv[2];

	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		char message[1024];

		sprintf(message, "Error: Can't read from file %s", file_from);
		error_exit(98, message);
	}

	int fd_to;

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
	{
		char message[1024];

		sprintf(message, "Error: Can't write to %s", file_to);
		error_exit(99, message);
	}

	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			char message[1024];

			sprintf(message, "Error: Can't write to %s", file_to);
			error_exit(99, message);
		}
	}

	if (bytes_read == -1)
	{
		char message[1024];

		sprintf(message, "Error: Can't read from file %s", file_from);
		error_exit(98, message);
	}

	if (close(fd_to) == -1)
	{
		char message[1024];

		sprintf(message, "Error: Can't close fd %d", fd_to);
		error_exit(100, message);
	}

	return (0);
}
