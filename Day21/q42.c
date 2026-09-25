/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 21 Question: 42
* Date: 25-09-2026
* PROBLEM STATEMENT:
* Write a program to check if a number is a perfect number.
*/
#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n && n > 0) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    return 0;
}