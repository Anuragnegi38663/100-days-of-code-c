/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 09 Question: 18
 * Date: 15-09-2026
 * PROBLEM STATEMENT:
 * Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
 * 90-100: Grade A
 * 80-89: Grade B
 * 70-79: Grade C
 * 60-69: Grade D
 * below 60: Grade F
 */
#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("Grade A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade C\n");
    }
    else if (marks >= 60)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }
    return 0;
}