/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 06 Question: 11
 * Date: 10-09-2026
 * PROBLEM STATEMENT:
 * Write a program to input an integer and check whether it is even or odd using if–else.
 */
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }
    else
    {
        printf("%d is odd\n", n);
    }
    return 0;
}