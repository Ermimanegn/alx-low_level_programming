<<<<<<< HEAD
#include "main.h"

/**
 * print_alphabet - Alphabets
 *
 * Return: void
=======
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, lowercase
 * You can only use _putchar twice in your code
 * Return: nothing.
>>>>>>> b9096478d2b37b02af3e6dc6c7f0a5fb195cb0f4
 */

void print_alphabet(void)
{
<<<<<<< HEAD
        char c = 'a';

        for (c = 'a'; c <= 'z'; c++)
        {
                _putchar(c);
        }
        _putchar('\n');
=======
	int lw = 'a';

	while (lw <= 'z')
	{
		_putchar(lw);
		lw += 1;
	}
	_putchar('\n');
>>>>>>> b9096478d2b37b02af3e6dc6c7f0a5fb195cb0f4
}
