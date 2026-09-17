/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 19 Question: 38
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to find the sum of digits of a number.
*/
#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n > 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("%d\n", sum);
    return 0;
}