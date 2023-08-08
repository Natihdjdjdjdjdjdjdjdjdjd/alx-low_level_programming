#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile -  function that reads a text file and prints
 * @filename: the name of the file
 * @letters: the name of the letter
 * Return: 0;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w;
	ssize_t r;
	char *b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	r = read(fd, b, letters);
	w = write(STDOUT_FILENO, b, r);

	free(b);
	close(fd);
	return (w);
}
