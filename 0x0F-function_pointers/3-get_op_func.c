#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - Selects the correct function to perform the operation asked by the user.
 * @s: The operator passed as an argument to the program
 * Return: A pointer to the function that corresponds to the operator given as a parameter.
*/
int (get_op_func(chars))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op)
{
if ((ops[i].op) == s)
{
return (ops[i].f);
}
i++;
}
printf("Error\n");
if ((s + 1) == '\0')
{
return (NULL);
}
exit(99);
}
