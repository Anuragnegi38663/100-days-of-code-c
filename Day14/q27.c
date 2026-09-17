/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 14 Question: 27
* Date: 18-09-2026
* PROBLEM STATEMENT:
* Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }
    printf("%d\n", sum);
    return 0;
}