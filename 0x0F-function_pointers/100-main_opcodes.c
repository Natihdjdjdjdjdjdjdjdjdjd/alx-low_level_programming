#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, y;
	char *arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arg = (char *)main;

	for (y = 0; y < bytes; y++)
	{
		if (y == bytes - 1)
		{
			printf("%02hhx\n", arg[y]);
			break;
		}
		printf("%02hhx ", arg[y]);
	}
	return (0);
}

