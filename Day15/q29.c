/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 15 Question: 29
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to calculate the factorial of a number.
*/
#include <stdio.h>
int main() {
    int n;
    long long fact = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("%lld\n", fact);
    return 0;
}