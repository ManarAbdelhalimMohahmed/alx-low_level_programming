#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: the address of the file
 * @letters: the number of the address to be printed
 * Return: if the file can not be opened or read, return 0
 *	if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes,return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t con1, n;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(size_t) * letters);

	if (buffer == NULL)
		return (0);

	con1 = read(fd, buffer, letters);

	if (con1 < 0)
		return (0);

	n = write(STDOUT_FILENO, buffer, con1);

	if (n == -1 || n != con1)
		return (0);

	close(fd);
	return (n);
}
