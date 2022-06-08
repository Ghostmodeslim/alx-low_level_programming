#include "main.h"
/**
 * _islower - checks wehther a character is a lower case
 * @c: character to test
 * Return: 1 if it is a lower case letter, 0 if it is not a lowercase letter
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

