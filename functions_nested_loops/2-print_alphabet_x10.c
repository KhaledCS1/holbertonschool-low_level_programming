#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet 10 times in lowercase.
*/
void print_alphabet_x10(void)
{
char ch;
int i;

for (i = 0; i < 10; i++)  /* Loop to repeat printing 10 times */
{
for (ch = 'a'; ch <= 'z'; ch++)  /* Print lowercase alphabet */
{
_putchar(ch);
}
_putchar('\n');  /* Print newline after each alphabet sequence */
}
}
