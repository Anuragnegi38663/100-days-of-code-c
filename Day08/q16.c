/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 08 Question: 16
 * Date: 15-09-2026
 * PROBLEM STATEMENT:
 * Write a program to input three numbers and find the largest among them using if–else.
 */
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        printf("Largest is %d\n", a);
    }
    else if (b >= c)
    {
        printf("Largest is %d\n", b);
    }
    else
    {
        printf("Largest is %d\n", c);
    }
    return 0;
}