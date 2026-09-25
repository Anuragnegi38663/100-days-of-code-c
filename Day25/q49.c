/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 25 Question: 49
* Date: 25-09-2026
* PROBLEM STATEMENT:
* Write a program to print the following pattern:
* 5
* 45
* 345
* 2345
* 12345
*/
#include <stdio.h>
int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}