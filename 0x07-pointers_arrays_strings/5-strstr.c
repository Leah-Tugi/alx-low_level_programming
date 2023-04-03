#include <stddef.h>
/**
 * _strstr - Finds the first occurrence of a substring in a string
 * @haystack: The string to search
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring, or NULL if
 *         the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *p1 = haystack;
char *p2 = needle;

while (*p1 == *p2 && *p2 != '\0')
{
++p1;
++p2;
}

if (*p2 == '\0')
{
return (haystack);
}

++haystack;
}

return (NULL);
}
