nclude <stdio.h>
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{

	putchar(*s);
	_puts_recursion(s + 1);
}

else
putchar('\n');
}
