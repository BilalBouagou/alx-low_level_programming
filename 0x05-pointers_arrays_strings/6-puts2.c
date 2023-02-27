#include "main.h"

/**
 * puts2 - prints every other character of a string.
 *@str: the string to use.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
