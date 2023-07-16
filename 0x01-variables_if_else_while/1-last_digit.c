#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * Description: Print the last digit of a random number and check its value
 * Return: Always 0 (Success)
 * */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand();
lastDigit = n % 10;
printf("Last digit of %d is %d and is ", n, lastDigit);
if (lastDigit > 5)
printf("greater than 5\n");
else if (lastDigit == 0)
printf("0\n");
else
printf("less than 6 and not 0\n");
return (0);
}
