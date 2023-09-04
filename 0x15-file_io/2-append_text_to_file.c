#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file -  function that appends text at the end of a file.
 * @filename: my file name
 * @text_content:  the file that tarmenate the string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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
	id = open(filename, O_APPEND | O_WRONLY, 0600);
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
