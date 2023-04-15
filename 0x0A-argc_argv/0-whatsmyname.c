#include <stdio.h>
#include "main.h"

/**
 * main - prints name
 * @argc: num of arguments
 * @argv: array of rguments
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
