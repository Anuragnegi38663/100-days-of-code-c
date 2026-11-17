/*
- Name: Anurag Negi
- Roll: 590038663
- Day: 28 Question: 55
- Date: 17-11-2026
- PROBLEM STATEMENT:
- Write a program to print all the prime numbers from 1 to n.
*/
#include <stdio.h>
int main() {
    int n, isPrime;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}