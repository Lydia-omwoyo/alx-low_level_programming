#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{

	
unsigned int k, d, count;

if (n < 0)
{
_putchar(45);
k = n * -1;
}
else
{
k = n;
}

d = k;
count = 1;

while (d > 9)
{
d /= 10;
count *= 10;
}

for (; count >= 1; count /= 10)
{
_putchar(((k / count) % 10) + 48);
}
}

