#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len;

    len = _strlen_recursion(s);

    if (len <= 1)
        return (1);

    return (_compare_chars(s, 0, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string recursively
 *
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);

    return (1 + _strlen_recursion(s + 1));
}

/**
 * _compare_chars - compares characters in a string recursively
 *
 * @s: the string to compare
 * @start: the index of the first character to compare
 * @end: the index of the second character to compare
 *
 * Return: 1 if the characters match, 0 otherwise
 */
int _compare_chars(char *s, int start, int end)
{
    if (start >= end)
        return (1);

    if (s[start] != s[end])
        return (0);

    return (_compare_chars(s, start + 1, end - 1));
}

