#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile -  reads a text file and prints.
 * @letters: the number of letters it should read and print
 * @filename: input file name
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	int file_des;
	char *f_name;

	if (filename == NULL)
		return (0);
	f_name = malloc(sizeof(size_t) * letters);
	if (filename == NULL)
		return (0);
	file_des = open(filename, O_RDWR);
	if (file_des == -1)
		return (0);
	n = read(file_des, f_name, letters);
	if (n == -1)
		return (0);
	if (write(STDOUT_FILENO, f_name, letters) < n)
		return (0);
	close(file_des);
	free(f_name);
	return (n);
}
