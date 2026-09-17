/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 17 Question: 33
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to check if a number is an Armstrong number.
*/
#include <stdio.h>
int main() {
    int n, original, sum = 0;
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        int rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    return 0;
}