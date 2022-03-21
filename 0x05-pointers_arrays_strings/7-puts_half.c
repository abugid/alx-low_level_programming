#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string to be printed
 */

void puts_half(char *str)
{
int i, j;

i = 0;

while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
for (j = i / 2; str[j] != '\0'; j++)
{
_putchar(str[j]);
}
}
else
{
for (j = (i / 2) + 1; str[j] != '\0'; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
