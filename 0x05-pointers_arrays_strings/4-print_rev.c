#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	while (i-- >= 0)
		write(1, &s[i], 1); 
}
