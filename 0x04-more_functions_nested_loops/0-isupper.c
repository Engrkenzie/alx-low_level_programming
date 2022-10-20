#include "main.h"

/** main - checks for upper case
 * return: 1 if c is uppercase 0 if otherwise
 */

int _isupper(int c);
{
	char c;
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
