/**
 * main - Entry point
 * @argc:count arguments of input
 * @argv: pointer of arguments of input
 * Return: Always 0 (Success)
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
	int i;


}
