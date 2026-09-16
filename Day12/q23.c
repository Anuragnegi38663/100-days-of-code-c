/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 12 Question: 23
 * Date: 16-09-2026
 * PROBLEM STATEMENT:
 * Write a program to calculate library fine based on late days as follows:
 * First 5 days late: ₹2/day
 * Next 5 days late: ₹4/day
 * Next 20 days late: ₹6/day
 * More than 30 days: Membership Cancelled
 */
#include <stdio.h>

int main()
{
    int days;
    scanf("%d", &days);

    if (days > 30)
    {
        printf("Membership Cancelled\n");
    }
    else if (days > 10)
    {
        int fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine Rs. %d\n", fine);
    }
    else if (days > 5)
    {
        int fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine Rs. %d\n", fine);
    }
    else if (days > 0)
    {
        int fine = days * 2;
        printf("Fine Rs. %d\n", fine);
    }
    else
    {
        printf("Fine Rs. 0\n");
    }

    return 0;
}