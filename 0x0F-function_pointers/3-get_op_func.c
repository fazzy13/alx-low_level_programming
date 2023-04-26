#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * asked by the user
 * @s: Operator passed as argument to the program
 *
 * Return: Pointer to the function that corresponds to the operator,
 * NULL if no match found
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

