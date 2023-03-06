#include "main.h"
/**
 * _atoi - change string to intiger
 * @s: the given string
 * Return: changed string (intiger)
 */
int _atoi(char *s)
{
int index1, index2;
unsigned int result;
int signature = 1;
char recent;

index1 = 0;
result = 0;
while (s[index1] != '\0')
{
recent = s[index1];
if (recent == '-')
{
signature *= -1;
}
if (recent >= '0' && recent <= '9')
{
index2 = index1;
while (s[index2] > 47 && s[index2] < 58)
{
result = (result * 10) + s[index2] - '0';
index2++;
}
break;
}
index1++;
}
if (signature < 0)
result *= signature;
return (result);

}
