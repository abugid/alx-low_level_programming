#include "3-calc.h"

/**
 * main - calculates given an operation
 * @argc: number of arguments provided
 * @argv: array of arguments provided
 * Return: 0 if success, 98 if incorrect number of arguments given,
 * 99 if given an invalid operator,
 * 100 if tries to divide or modulo by zero
 */

int main(int argc, char *argv[])
{
	int (*op_funct)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}
	if ((get_op_func(argv[2]) == op_div || get_op_func(argv[2]) == op_mod)
		&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_funct = get_op_func(argv[2]);
	result = op_funct(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
