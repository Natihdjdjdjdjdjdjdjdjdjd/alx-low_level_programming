#include "main.h"
#include <stdio.h>
/**
 * read_textfile - function that reads a text file and print
 * @filename: the name of my file
 * @letters: the value the number of letters it should read and print
 * Return: always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int id = 0;
	ssize_t wr = 0;
	ssize_t l = 0;
	char *buf = NULL;

	if (filename != NULL)
	{
		buf = malloc(letters);
		if (buf == NULL)
		{
			return (0);
		}

		id = open(filename, O_RDONLY, 0600);
		if (id == -1)
		{
			free(buf);
			return (0);
		}
		l = read(id, buf, letters);
		if (l == -1)
		{
			free(buf);
			return (0);
		}
		wr = write(STDOUT_FILENO, buf, l);
		if (wr == -1 || wr < l)
		{
			free(buf);
			return (0);
		}
		close(id);
		free(buf);
		return (wr);
	}
	return (0);
}
