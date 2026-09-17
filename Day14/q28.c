/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 14 Question: 28
* Date: 18-09-2026
* PROBLEM STATEMENT:
* Write a program to print the product of even numbers from 1 to n.
*/
#include <stdio.h>
int main() {
    int n;
    int product = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i = i + 2) {
        product = product * i;
    }
    printf("%d\n", product);
    return 0;
}