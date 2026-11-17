/*
- Name: Anurag Negi
- Roll: 590038663
- Day: 27 Question: 53
- Date: 17-11-2026
- PROBLEM STATEMENT:
- Write a program to print the following pattern:
- *
- ***
- *****
- *******
- *********
- *******
- *****
- ***
- *
*/
#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}