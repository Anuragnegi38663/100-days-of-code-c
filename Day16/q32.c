/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 16 Question: 32
* Date: 17-09-2026
* PROBLEM STATEMENT:
* Write a program to check if a number is a palindrome.
*/
#include <stdio.h>
int main() {
    int n, original, rev = 0;
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (original == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}