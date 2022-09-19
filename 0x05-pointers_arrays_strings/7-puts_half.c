#include <stdio.h>
#include "main.h"

/**
 * puts_half - function that prints half a spring. followed by a new line.
 *
 * @str: this is he input string
 */

void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
