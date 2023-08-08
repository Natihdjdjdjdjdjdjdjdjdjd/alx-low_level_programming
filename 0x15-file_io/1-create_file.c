#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content:  NULL terminated string to write to the file
 * Return: -1 null 1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int cf;
	int w;
	int l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	cf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(cf, text_content, l);

	if (cf == -1 || w == -1)
		return (-1);

	close(cf);

	return (1);
}
