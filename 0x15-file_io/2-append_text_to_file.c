#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n;
	ssize_t i;
	size_t j = 0;

	if (filename == NULL)
		return (-1);
	n = open(filename, O_APPEND | O_WRONLY);
	if (n == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(n);
		return (1);
	}
	while (text_content[j])
		j++;
	i = write(n, text_content, j);
	if (i == -1)
	{
		close(n);
		return (-1);
	}
	return (1);
}
