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

if (j == 0)  /* Print first number in the row */
_putchar('0' + prod);
else
{
_putchar(',');  /* Print separator */
_putchar(' ');

if (prod < 10)  /* If product is single digit, add extra space */
_putchar(' ');

if (prod >= 10)  /* Print tens only if product is >= 10 */
_putchar('0' + (prod / 10));

_putchar('0' + (prod % 10));  /* Print ones */
}
}
_putchar('\n');  /* New line after each row */
}
}

