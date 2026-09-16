/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 11 Question: 22
 * Date: 16-09-2026
 * PROBLEM STATEMENT:
 * Write a program to find profit or loss percentage given cost price and selling price.
 */
#include <stdio.h>
int main()
{
    float cp, sp;
    scanf("%f %f", &cp, &sp);
    if (sp > cp)
    {
        float profit_percent = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n", profit_percent);
    }
    else if (cp > sp)
    {
        float loss_percent = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n", loss_percent);
    }
    else
    {
        printf("No Profit No Loss\n");
    }
    return 0;
}