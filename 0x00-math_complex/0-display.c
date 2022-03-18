#include "holberton.h"

/**
 * display_complex_number - Display a number complex.
 *
 * @c: A complex number.
 *
 * Return: Void.
 */

void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
	{
		printf("0");
	}
	else if (c.im == 0)
	{
		printf("%.9g", c.re);
	}
	else
	{
		if (c.im == -1)
			printf("%.9g - i", c.re);
		else if (c.im == 1)
			printf("%.9g + i", c.re);
		else if (c.im < 0)
			printf("%.9g - %.9gi", c.re, -c.im);
		else
			printf("%.9g + %.9gi", c.re, c.im);
	}
	printf("\n");
}
