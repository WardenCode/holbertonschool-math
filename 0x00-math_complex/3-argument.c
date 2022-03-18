#include "holberton.h"

/**
 * argument - Argument of a complex number.
 *
 * @c: A complex number.
 *
 * Return: The argument of a complex number.
 */

double argument(complex c)
{
	double argument = 0;

	if (c.re != 0)
	{
		argument = atan2(c.im, c.re);
		return (argument);
	}
	return (0);
}
