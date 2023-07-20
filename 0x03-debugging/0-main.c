#include <stdio.h>

// Function prototype
void positive_or_negative(int num);

/**
 * main - Test function for positive or negative
 * Return: 0
 */
int main(void)
{
    int i;
    i = 0;
    positive_or_negative(i);
    return (0);
}

// Simple implementation of positive_or_negative function
void positive_or_negative(int num)
{
    if (num > 0)
    {
        printf("%d is positive.\n", num);
    }
    else if (num < 0)
    {
        printf("%d is negative.\n", num);
    }
    else
    {
        printf("%d is zero.\n", num);
    }
}
