#include "main.h"

/**
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _isupper(int c)
{
int num = 0;
if (c >= 65 && c <= 90)
{
num = 1;
}
else
{
num = 0;
}
return (num);
}
