/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 05 Question: 9
 * Date: 10-09-2026
 * PROBLEM STATEMENT:
 * Write a program to calculate simple and compound interest for given principal, rate, and time.
 */
#include <stdio.h>
int main()
{
    float p, r, t;
    scanf("%f %f %f", &p, &r, &t);
    float si = (p * r * t) / 100.0;
    float rate_factor = 1.0 + (r / 100.0);
    float amount_factor = 1.0;
    for (int i = 0; i < (int)t; i++)
    {
        amount_factor = amount_factor * rate_factor;
    }
    float ci = (p * amount_factor) - p;
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", si, ci);
    return 0;
}