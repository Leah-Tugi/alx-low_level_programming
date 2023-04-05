#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
