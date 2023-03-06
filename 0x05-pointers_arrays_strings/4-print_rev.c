#include "main.h"
/**
* print_rev - print a stering in revserse
* @s: string to be revsersed
* Return: void
*/
void print_rev(char *s)
{
int i;
int revs;

for (i = 0; s[i] != '\0'; i++)
{

}
for (revs = i - 1; revs >= 0; revs--)
{
_putchar(s[revs]);
}
_putchar('\n');
}
