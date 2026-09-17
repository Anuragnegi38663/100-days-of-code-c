/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 20 Question: 39
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to find the product of odd digits of a number.
*/
#include <stdio.h>
int main() {
    int n, digit;
    int prod = 1;
    scanf("%d", &n);
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            prod = prod * digit;
        }
        n = n / 10;
    }
    printf("%d\n", prod);
    return 0;
}