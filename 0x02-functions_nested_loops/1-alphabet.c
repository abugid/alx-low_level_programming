
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
    return (0);
}

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