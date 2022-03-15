#include "main.h"

/**
 * jack_bauer - prints the minutes to the song
 *
 */

void jack_bauer(void)
{
int i1, i2, i3, i4;

for (i1 = 0; i1 < 3; i1++)
{
for (i2 = 0; i2 < 4; i2++)
{
for (i3 = 0; i3 < 6; i3++)
{
for (i4 = 0; i4 < 10; i4++)
{
_putchar(i1 + '0');
_putchar(i2 + '0');
_putchar(':');
_putchar(i3 + '0');
_putchar(i4 + '0');
_putchar('\n');
}
}
}
}
}
