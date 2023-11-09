#include "variadic_functions.h"
#include <stdarg.h>
/**
 *  sum_them_all -  function that returns the sum of all its parameters
 *  @n:number of parameter
 *  @...: the parameter passed to the argument
 *  Return: sum of the variable otherise if n == 0-0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
