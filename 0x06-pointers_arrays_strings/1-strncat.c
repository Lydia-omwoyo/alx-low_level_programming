#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int z;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[k] = src[z];
	k++;
	z++;
	}
	dest[k] = '\0';
	return (dest);
}



