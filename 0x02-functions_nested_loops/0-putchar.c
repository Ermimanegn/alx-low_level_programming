<<<<<<< HEAD
#include "main.h"

/**
* main - Start process
* Return: Always 0
*
*/

int main(void)
{

        _putchar('_');
        _putchar('p');
        _putchar('u');
        _putchar('t');
        _putchar('c');
        _putchar('h');
        _putchar('a');
        _putchar('r');
        _putchar('\n');
        return (0);
=======
#include <unistd.h>
#include "main.h"

/**
 * main - program that prints _putchar.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char put_char[8] = "_putchar";

	while (n < 8)
	{
		_putchar(put_char[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
>>>>>>> b9096478d2b37b02af3e6dc6c7f0a5fb195cb0f4
}
