#include "main.h"
#include <stdio.h>
/**
*print_to_98 - print all numbers upro 98
*@n: number to be processed
*Return: none
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 97; i++)
			printf("%d, ", i);
	}
	else
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	printf("98\n");
}
