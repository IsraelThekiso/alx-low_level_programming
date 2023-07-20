#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - Checks if a number is positive, negative, or zero
 * @n: The number to be checked
 */
void positive_or_negative(int n)
{
    if (n > 0)
        printf("%d is positive.\n", n);
    else if (n < 0)
        printf("%d is negative.\n", n);
    else
        printf("The number is zero.\n");
}

/**
 * main - Test function for positive_or_negative
 * Return: 0
 */
int main(void)
{
    int i = 0;
    positive_or_negative(i);
    return (0);
}
