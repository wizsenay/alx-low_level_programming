#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * create_file - creates a file.
 * @filename: tne name of the file
 * @text_content: the text content of file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int n, c;
	size_t i = 0;
	ssize_t b;

	if (filename == NULL)
		return (-1);

	n = creat(filename, O_RDWR);
	if (n == -1)
		return (-1);
	c = chmod(filename, 0600);
	if (c == -1)
	{
		close(n);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(n);
		return (1);
	}
	else
	{
		while (text_content[i])
			i++;
		b = write(n, text_content, i);
		if (b == -1)
		{
			close(n);
			return (-1);
		}
	}
	close(n);
	return (1);
}
