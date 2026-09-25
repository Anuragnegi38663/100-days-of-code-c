/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 23 Question: 46
* Date: 25-09-2026
* PROBLEM STATEMENT:
* Write a program to print the following pattern:
* *****
* *****
* *****
* *****
* *****
*/
#include <stdio.h>
int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}