#include "main.h"
/**
  * _strcpy - copy string
  * @dest: destination 
  * @src: source string
  * Return: ponter copied string
  */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length;
	
	for (length = 0; src[length] != '\0'; length++)
	{

    }
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
