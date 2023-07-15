#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstDigit = 0;
int secondDigit;
while (firstDigit <= 8)
{
secondDigit = firstDigit + 1;
while (secondDigit <= 9)
{
putchar(firstDigit + '0');
putchar(secondDigit + '0');
if (firstDigit != 8 || secondDigit != 9)
{
putchar(',');
putchar(' ');
}
secondDigit++;
}
firstDigit++;
}
putchar('\n');
return (0);
}
