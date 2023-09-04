#include "main.h"
#include <stdio.h>
/**
 * create_file -  function that creates a file.
 * @filename: it a file name of my file
 * @text_content: a string that termenate afile
 * Return: always 0 (success)
 */
int create_file(const char *filename, char *text_content)
{
	int id = 0, mywr = 0, tell = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (tell = 0; text_content[tell] != '\0'; tell++)
		{}

	}
	id = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (id == -1)
	{
		return (-1);
	}
	mywr = write(id, text_content, tell);
	if (mywr == -1)
	{
		return (-1);
	}
	close(id);
	return (1);
}
