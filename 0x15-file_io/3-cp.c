#include "holberton.h"
/**
 *print_errors - prints a corresponding error, according to a case, to the
 *standard output
 *@_case: number of error
 *@file_name: file that can not posible write or read
 *
 *Return: 0 no errors or 97, 98, 99, or 100 if an error occurs according to
 *@_case
 */
int print_errors(int _case, char *file_name)
{
	int _error = 0;

	switch (_case)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		_error = _case;
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_name);
		_error = _case;
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			file_name);
		_error = _case;
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", _case);
		_error = 100;
		break;
	default:
		break;
	}

	return (_error);
}
/**
 *main - entry point
 *@argc: amount of arguments supplied to the program
 *@argv: array of pointers to the arguments
 *
 *Return: 0 on succes or 97, 98, 99, or 100 on failure (Check the standard
 *output)
 */
int main(int argc, char *argv[])
{
	int fd_from = 0, fd_to = 0;
	char buffer[LEN_BUFFER];
	ssize_t aux_write = 0, aux_read = 0;

	if (argc != 3)
		exit(print_errors(97, NULL));
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit(print_errors(98, argv[1]));
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		exit(print_errors(close(fd_from) == -1 ? fd_from : 99,
		argv[2]));
	while ((aux_read = read(fd_from, &buffer, LEN_BUFFER)))
	{
		if (aux_read == -1)
			exit(print_errors(close(fd_from) == -1 ? fd_from :
			close(fd_to) == -1 ? fd_to : 98, argv[1]));
		aux_write = write(fd_to, &buffer, aux_read);
		if (aux_write == -1)
			exit(print_errors(close(fd_from) == -1 ? fd_from :
			close(fd_to) == -1 ? fd_to : 99, argv[2]));
	}

	return (print_errors(close(fd_from) == -1 ? fd_from :
		close(fd_to) == -1 ? fd_to : 0, NULL));
}
