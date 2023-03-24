#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
long long num = 612852475143;
long long largest_prime_factor = 2;

while (num > largest_prime_factor)
{
if (num % largest_prime_factor == 0)
{
num /= largest_prime_factor;
}
else
{
largest_prime_factor++;
}
}

printf("%lld\n", largest_prime_factor);
return (0);
}
