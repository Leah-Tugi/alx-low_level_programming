#include <stdio.h>
#include "main.h"

/**
 *  _putchar -writes character to stdout
 *  @c: character to print
 *
 *  Return: on succes 1 on error -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
