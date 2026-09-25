/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 24 Question: 48
* Date: 25-09-2026
* PROBLEM STATEMENT:
* Write a program to print the following pattern:
* 1
* 12
* 123
* 1234
* 12345
*/
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}