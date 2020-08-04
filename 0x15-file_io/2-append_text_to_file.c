#include "holberton.h"
/**
 *append_text_to_file - append text at the end of a file
 *@filename: file's name
 *@text_content: content to be copied on file
 *
 *Return: -1 if fails or 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor = 0, i = 0;
	ssize_t aux_write = 0;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_RDWR | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	if (!text_content)
	{
		close(file_descriptor);
		return (1);
	}
	while (text_content[i])
	{
		aux_write = write(file_descriptor, &text_content[i], 1);
		if (aux_write == -1)
		{
			close(file_descriptor);
			return (-1);
		}
		i++;
	}

	return (1);
}
