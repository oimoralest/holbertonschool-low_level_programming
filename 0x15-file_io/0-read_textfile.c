#include "holberton.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: file's name
 *@letters: amount of chars to be printed
 *
 *Return: 0 if fails to open the file, or if fails to allocate memory, or fails
 *to write to the standard ouput. On succes, returns the amount of chars readed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buffer;
	ssize_t chars_readed = 0, i = 0, aux_write = 0;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY); /* file opened */
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	chars_readed = read(fd, buffer, letters); /* file readed */
	while (i < chars_readed)
	{
		aux_write = write(STDOUT_FILENO, &buffer[i], 1);
		if (aux_write == -1)
			return (0);
		i++;
	}
	close(fd);
	free(buffer);

	return (chars_readed);
}
