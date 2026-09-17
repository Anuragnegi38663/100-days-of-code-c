/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 19 Question: 37
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to find the LCM of two numbers.
*/
#include <stdio.h>
int main() {
    int a, b, max;
    scanf("%d %d", &a, &b);
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("%d\n", max);
            break;
        }
        max++;
    }
    return 0;
}