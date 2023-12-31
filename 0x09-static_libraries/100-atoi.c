#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, j, n, len, t, dg;

	i = 0;
	j = 0;
	n = 0;
	len = 0;
	t = 0;
	dg = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && t == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dg = s[i] - '0';
			if (j % 2)
				dg = -dg;
			n = n * 10 + dg;
			t = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			t = 0;
		}
		i++;
	}

	if (t == 0)
		return (0);

	return (n);
}
