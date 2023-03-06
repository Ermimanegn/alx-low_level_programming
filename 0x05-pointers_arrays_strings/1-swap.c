#include "main.h"
/**
* swap_int - swaps two integers
* @a: first numebr
* @b: second number
* Return: none
*/
void swap_int(int *a, int *b) 
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
