#include <stdio.h>

/**
 * print_arguments - prints all ag
 * @argc: num of arg
 * @argv: array off arg
 */
void print_arguments(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
/**
 * main - prints all arg
 * @argc: nm of arg
 * @argv: aray of arg
 *
 * Return: alays 0
 */
int main(int argc, char **argv)
{
	print_arguments(argc, argv);
	return (0);
}
