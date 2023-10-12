#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - This selects the exact function to perform
 *               the operation defined by the user.
 * @s: The operator to be used as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
																};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	i++;

	return (ops[i].f);
}
