/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 13 Question: 26
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to print numbers from 1 to n.
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}