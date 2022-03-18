#include "holberton.h"

/**
 * modulus - Modulus of a complex number.
 *
 * @c: A complex number.
 *
 * Return: The modulus of a complex number.
 */

double modulus(complex c)
{
	double modulus = 0;

	modulus = sqrt((pow(c.re, 2) + pow(c.im, 2)));
	return (modulus);
}
