#include "main.h"
/**
 * main - Main
 * Return: 0
 */
int main(void)
{
char text[] = "_putchar";
int i = 0;
int j = sizeof(text) / sizeof(text[0]);
while (i < (j - 1))
{
_putchar(text[i]);
i++;
}
_putchar('\n');
return (0);
}





