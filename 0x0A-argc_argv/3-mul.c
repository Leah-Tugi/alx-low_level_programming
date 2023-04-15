#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 nums
 * @argc: num of arrg
 * @argv: num of arg
 *
 * Return: 0 on succes 1 on fsilure
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
