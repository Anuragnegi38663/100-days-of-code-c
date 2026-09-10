/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 04 Question: 8
 * Date: 10-09-2026
 * PROBLEM STATEMENT:
 * Write a program to find and display the sum of the first n natural numbers.
 */
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = n * (n + 1) / 2;
    printf("Sum=%d\n", sum);
    return 0;
}