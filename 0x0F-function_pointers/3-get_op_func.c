#include "3-calc.h"
/**
  *get_op_func - determine the appropriate operator
  *@s: operator input
  *
  *Return: result of operation, or NULL if invalid operator
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	a = 0;
	while (a < 5)
	{
		if (s[0] == ops[a].op[0])
		{
			return (ops[a].f);
		}
		a++;
	}
	return (NULL);
}
