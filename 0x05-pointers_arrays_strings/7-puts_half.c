#include "main.h"
/**
* puts_half - print half of a string
* @str: given string
* Return: void
*/
void puts_half(char *str)
{
int i;
int length;

for (length = 0; str[length] != '\0'; length++)
{

}
if (length % 2 == 0)
{
for (i = length / 2; i < length; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = ((length - 1) / 2) + 1; i < length; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
