#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexadecimal
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer1[98] = {0};
    char buffer2[98] = {0};

    _memcpy(buffer1, "Holberton School!", 17);
    printf("Before memcpy:\n");
    simple_print_buffer(buffer2, 98);

    _memcpy(buffer2, buffer1, 17);
    printf("After memcpy:\n");
    simple_print_buffer(buffer2, 98);

    return (0);
}

