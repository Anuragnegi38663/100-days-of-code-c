/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 03 Question: 5
 * Date: 10-09-2026
 * PROBLEM STATEMENT:
 * Write a program to convert temperature from Celsius to Fahrenheit.
 */
#include <stdio.h>
int main()
{
    float celsius;
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 1.8) + 32;
    printf("Fahrenheit=%.0f\n", fahrenheit);
    return 0;
}