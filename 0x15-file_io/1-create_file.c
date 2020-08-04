#include "holberton.h"
/**
 *create_file - creates a file
 *@filename: file's name
 *@text_content: content to copy to the created file
 *
 *Return: -1 if fails or 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor = 0, i = 0;
	ssize_t aux_write = 0;

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC,
				S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);
	while (text_content[i] && text_content)
	{
		aux_write = write(file_descriptor, &text_content[i], 1);
		if (aux_write == -1)
			close(file_descriptor), return (-1);
		i++;
	}
	close(file_descriptor);

	return (1);
}
