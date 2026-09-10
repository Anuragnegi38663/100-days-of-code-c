/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 05 Question: 10
 * Date: 10-09-2026
 * PROBLEM STATEMENT:
 * Write a program to input time in seconds and convert it to hours:minutes:seconds format.
 */
#include <stdio.h>
int main()
{
    int total_seconds;
    scanf("%d", &total_seconds);
    int hours = total_seconds / 3600;
    int remaining = total_seconds % 3600;
    int minutes = remaining / 60;
    int seconds = remaining % 60;
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}