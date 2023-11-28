#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * file_from - that reads a text file
 * @filename: the input file name.
 * Return: pointer point to the cop of the file content
 */

char *file_from(const char *filename);

char *file_from(const char *filename)
{
	char *cope;
	int n, c, i;

	cope = malloc(1024);
	if (cope == NULL)
		exit(98);
	n = open(filename, O_RDONLY);
	if (n == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	i = read(n, cope, 1024);
	if (i == -1)
	{
		close(n);
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	c = close(n);
	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", n);
		exit(100);
	}
	return (cope);
}
/**
 * file_to - write a text file
 * @new_file: a new file name we try to add.
 * @content_file: we want to add a file
 * Return: 0
 */
void file_to(const char *new_file, char *content_file);

void file_to(const char *new_file, char *content_file)
{
	int n, c, col;
	size_t i = 0;
	ssize_t b;

	n = open(new_file, O_WRONLY | O_CREAT | O_TRUNC);
	if (n == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", new_file);
		exit(99);
	}
	c = chmod(new_file, 0664);
	if (c == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", new_file);
		close(n);
		exit(99);
	}
	while (content_file[i])
		i++;
	b = write(n, content_file, i);
	if (b == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", new_file);
		exit(99);
	}
	col = close(n);
	if (col == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", n);
		exit(100);
	}

}
/**
 * main - cope the content of a file to another file.
 * @argv: input file names
 * @argc: counter to the number of argument
 * Return: 0 on success an 1 on failure.
 */

int main(int argc, char *argv[])
{
	char *bufer;

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}
	bufer = file_from(argv[1]);
	file_to(argv[2], bufer);
	return (0);
}
