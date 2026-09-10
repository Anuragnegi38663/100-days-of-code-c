/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 07 Question: 13
 * Date: 10-09-2026
 * PROBLEM STATEMENT:
 * Write a program to input a year and check whether it is a leap year or not using conditional statements.
 */
#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
    return 0;
}