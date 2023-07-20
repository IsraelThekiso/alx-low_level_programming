#include <stdio.h>

/**
 * main - prevents an infinite loop
 * Return: 0
 */
int main(void)
{
    int i;
    printf("Infinite loop incoming :(\n");
    i = 0;
    while (i < 10) // Correct the loop condition
    {
        putchar(i + '0'); // Print the digits 0 to 9
        i++; // Increment i to avoid an infinite loop
    }
    printf("\nInfinite loop avoided! \\o/\n");
    return (0);
}
