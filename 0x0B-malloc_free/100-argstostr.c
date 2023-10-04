#include "main.h"
#include <stdlib.h>
/**
  *argstostr -A function concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int j, k, l, size;
	char *arg;

	size = 0;
	l = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	j = 0;
	while (j < ac)
	{
		k = 0;
		while (av[j][k])
		{
			size++;
			k++;
		}
		size++;
		j++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	j = 0;
	while (j < ac)
	{
		k = 0;
		while (av[j][k])
		{
			arg[l] = av[j][k];
			k++;
			l++;
		}
		arg[l] = '\n';
		l++;
		j++;
	}
	arg[l] = '\0';
	return (arg);
}
