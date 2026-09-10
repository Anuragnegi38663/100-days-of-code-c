/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 04 Question: 7
 * Date: 10-09-2026
 * PROBLEM STATEMENT:
 * Write a program to swap two numbers without using a third variable.
 */
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: %d %d\n", a, b);
    return 0;
}