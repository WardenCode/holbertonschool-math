#include "holberton.h"

/**
 * multiplication - Multiplication of a two complex numbers.
 *
 * @c1: A complex number.
 *
 * @c2: A complex number.
 *
 * @c3: Result of the multiplication.
 *
 * Return: Void.
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = ((c1.re * c2.re) - (c1.im * c2.im));
	c3->im = ((c1.re * c2.im) + (c1.im * c2.re));
}
