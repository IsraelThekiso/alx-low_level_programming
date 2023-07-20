#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - Checks if a number is positive, negative, or zero
 * @i: The number to be checked
 */
void positive_or_negative(int i);

/**
 * largest_number - Finds the largest among three numbers
 * @a: First number
 * @b: Second number
 * @c: Third number
 * Return: The largest number
 */
int largest_number(int a, int b, int c);

/**
 * print_remaining_days - Prints the number of days remaining in the year
 * @month: Month (1-12)
 * @day: Day (1-31)
 * @year: Year (full four-digit year)
 */
void print_remaining_days(int month, int day, int year);

/**
 * convert_day - Converts a given month and day to the day of the year
 * @month: Month (1-12)
 * @day: Day (1-31)
 * Return: The day of the year (1-366)
 */
int convert_day(int month, int day);

#endif /* MAIN_H */
