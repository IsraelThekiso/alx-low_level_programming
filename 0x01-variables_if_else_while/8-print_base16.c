#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hexDigits[] = "0123456789abcdef";
int i;
for (i = 0; i < 16; i++)
{
putchar(hexDigits[i]);
}
putchar('\n');
return (0);
}
