/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: pointer to string containing characters to match
 *
 * Return: number of bytes
 **/
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
char *p;

for (; *s; s++)
{
for (p = accept; *p; p++)
{
if (*s == *p)
{
len++;
break;
}
}
if (*p == '\0')
break;
}

return (l
en);
}
