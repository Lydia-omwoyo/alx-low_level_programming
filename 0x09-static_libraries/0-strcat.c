#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int h;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[n] = src[h];
		n++;
		h++;
	}

	dest[n] = '\0';
	return (dest);
}
