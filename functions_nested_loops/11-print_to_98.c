#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Prints all natural numbers from n to 98.
* @n: The starting number.
*/
void print_to_98(int n)
{
if (n <= 98) /* If n is less than or equal to 98, print in ascending order */
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else /* If n is greater than 98, print in descending order */
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("%d\n", n); /* Print the final number (98) */
}
