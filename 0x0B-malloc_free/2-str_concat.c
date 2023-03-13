#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenate two strings
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *conct;

int k, h;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

k = h = 0;

while (s1[k] != '\0')
k++;

while (s2[h] != '\0')
h++;

conct = malloc(sizeof(char) * (h + k + 1));

if (conct == NULL)
{
return (NULL);
}
k = h = 0;

while (s1[k] != '\0')
{
conct[k] = s1[k];
k++;
}
while (s2[h] != '\0')
{
conct[k] = s2[h];
k++, h++;
}
conct[k] = '\0';
return (conct);
}
