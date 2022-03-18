#include "holberton.h"

/**
 * conjugate - Conjugate of a complex number.
 *
 * @c: A complex number.
 *
 * Return: The conjugate of a complex number.
 */

complex conjugate(complex c)
{
	c.im = -c.im;
	return (c);
}
