#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int i, j, prod;

for (i = 0; i <= 9; i++)  /* Loop for rows */
{
for (j = 0; j <= 9; j++)  /* Loop for columns */
{
prod = i * j;  /* Calculate product */

if (j == 0)
_putchar('0' + prod);  /* Print first number without space */
else
{
_putchar(',');  /* Print separator */
_putchar(' ');

if (prod < 10)  /* If single digit, add an extra space */
_putchar(' ');

_putchar('0' + (prod / 10));  /* Print tens (if any) */
_putchar('0' + (prod % 10));  /* Print ones */
}
}
_putchar('\n');  /* New line after each row */
}
}

