#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstDigit = 0;
int secondDigit;
int thirdDigit;
while (firstDigit <= 7)
{
secondDigit = firstDigit + 1;
while (secondDigit <= 8)
{
thirdDigit = secondDigit + 1;
while (thirdDigit <= 9)
{
putchar(firstDigit + '0');
putchar(secondDigit + '0');
putchar(thirdDigit + '0');
if (firstDigit != 7 || secondDigit != 8 || thirdDigit != 9)
{
putchar(',');
putchar(' ');
}
thirdDigit++;
}
secondDigit++;
}
firstDigit++;
}
putchar('\n');
return (0);
}
