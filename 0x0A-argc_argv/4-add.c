#include "main.h"

/**
 * main - calculate the addition of two numbers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: Always 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
