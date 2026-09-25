/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 22 Question: 43
* Date: 25-09-2026
* PROBLEM STATEMENT:
* Write a program to check if a number is a strong number.
*/
#include <stdio.h>
int main() {
    int n, temp, sum = 0;
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == n && n > 0) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    return 0;
}