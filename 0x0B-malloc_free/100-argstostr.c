#include "main.h"
#include <stdlib.h>
/**
* argstostr - main entry
* @ac: int input
* @av: double pointer array
* Return: 0
*/
char *argstostr(int ac, char **av)
{
int i, k, z = 0, l = 0;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (k = 0; av[i][k]; k++)
l++;
}

l += ac;
str = malloc(sizeof(char) * l + 1);

if (str == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (k = 0; av[i][k]; k++)
{
str[z] = av[i][k];
z++;
}
if (str[z] == '\0')
{
str[z++] = '\n';
}
}
return (str);
}
