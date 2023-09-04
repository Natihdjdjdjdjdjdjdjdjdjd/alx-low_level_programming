#include "main.h"
#include <stdio.h>
/**
 * main - that copies the content of a file to another file.
 * @argc: our filwe that will copy
 * @argv: our vile that pASTEDD
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int orginal, org_to, org_cp, cp_to, x, y;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	orginal = open(argv[1], O_RDONLY);
	if (orginal == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	org_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (org_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((org_cp = read(orginal, buf, 1024)) > 0)
	{
		cp_to = write(org_to, buf, org_cp);
		if (org_cp != cp_to)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (org_cp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	x = close(orginal);
	if (x == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", org_cp), exit(100);
	y = close(org_to);
	if (y == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_to), exit(100);
	return (0);
}
