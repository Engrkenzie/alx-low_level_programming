#include "main.h"

/**
 *_islower - chexk if a character is lower case
 *@c: is the parameter
 *Return: 1 if the char is lowercase, otherwise 1
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

