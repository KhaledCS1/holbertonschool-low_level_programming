#include "main.h"

/**
* print_alphabet - Prints the lowercase alphabet followed by a new line
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');  /* Second _putchar used to add a new line */
}
