#include "_putchar.c"

void printStr(char* s)
{
    int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

    return;
}