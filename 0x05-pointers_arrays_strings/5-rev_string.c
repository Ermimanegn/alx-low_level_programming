#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
int length;
int temp;
int index = 0;

for (length = 0; s[length] != '\0'; length++)
{

}
for (index = 0; index < length; index++)
{
temp = s[index];
s[index] = s[length - 1];
s[length - 1] = temp;
length--;
}
}
