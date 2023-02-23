#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 *
 * Return: no return.
 */
void print_square(int size)
{
int k, j;

for (k = 0; k < size; k++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
if (k != size - 1)
_putchar('\n');
}
_putchar('\n');
}

