#include "main.h"
#include <string.h>
/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{
	int rev;

	for (rev = strlen(s); rev > 0; rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
