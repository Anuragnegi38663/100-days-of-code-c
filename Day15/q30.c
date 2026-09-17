/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 15 Question: 30
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to reverse a given number.
*/
#include <stdio.h>
int main() {
    int n, rev = 0;
    scanf("%d", &n);
    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("%d\n", rev);
    return 0;
}