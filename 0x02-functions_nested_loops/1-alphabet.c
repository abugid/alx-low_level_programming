#include "main.h"

/** 
 * print_alphabet
 * prints the alphabet
 * Return: void
 */
void print_alphabet(void)
{
    int i, j = 97;
    for (i = 0; i < 26; i++)
    {
        _putchar(j);
        j++;
    }
    _putchar('\n');
}