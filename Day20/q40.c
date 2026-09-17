/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 20 Question: 40
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to find the 1’s complement of a binary number and print it.
*/
#include <stdio.h>
int main() {
    int n, temp, place = 1;
    scanf("%d", &n);
    temp = n;
    while (temp > 9) {
        temp = temp / 10;
        place = place * 10;
    }
    while (place > 0) {
        int digit = (n / place) % 10;
        if (digit == 0) {
            printf("1");
        } else {
            printf("0");
        }
        place = place / 10;
    }
    printf("\n");
    return 0;
}