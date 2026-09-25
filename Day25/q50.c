/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 25 Question: 50
* Date: 25-09-2026
* PROBLEM STATEMENT:
* Write a program to print the following pattern:
* *****
*  ****
*   ***
*    **
*     *
*/
#include <stdio.h>
int main() {
    for (int i = 0; i < 5; i++) {
        for (int space = 0; space < i; space++) {
            printf(" ");
        }
        for (int star = 0; star < 5 - i; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}