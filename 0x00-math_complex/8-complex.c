#include "holberton.h"

/**
 * complex_from_mod_arg - Get the original complex number from
 * it's modulus and argument.
 *
 * @m: Modulus of a complex number.
 *
 * @arg: Agtument of a complex number.
 *
 * Return: The modulus of a complex number.
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg); 	/*mod * cos(re/mod)*/
	c3->im = m * sin(arg);	/*mod * sin(im/mod)*/
}
