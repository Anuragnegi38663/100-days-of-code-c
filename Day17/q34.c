/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 17 Question: 34
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to check if a number is prime.
*/
#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    return 0;
}