#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 * without using char variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 48;
while (number <= 57)
{
putchar(number);
number++;
}
putchar('\n');
return (0);
}
