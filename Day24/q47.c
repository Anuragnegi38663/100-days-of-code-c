/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 24 Question: 47
* Date: 25-09-2026
* PROBLEM STATEMENT:
* Write a program to print the following pattern:
* *
* **
* ***
* ****
* *****
*/
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}