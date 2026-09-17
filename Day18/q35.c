/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 18 Question: 35
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to print all factors of a given number.
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}