#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int d)
{
	if (d >= 'A' && d <= 'Z')
		return (1);
	else
		return (0);
}
