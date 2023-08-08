#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of a file
 * @text_content:  terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ap;
	int w;
	int l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	ap = open(filename, O_WRONLY | O_APPEND);
	w = write(ap, text_content, l);

	if (ap == -1 || w == -1)
		return (-1);

	close(ap);

	return (1);
}
