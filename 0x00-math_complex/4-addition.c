#include "holberton.h"

/**
 * addition - Addition of a two complex numbers.
 *
 * @c1: A complex number.
 *
 * @c2: A complex number.
 *
 * @c3: Result of the addition.
 *
 * Return: Void.
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
