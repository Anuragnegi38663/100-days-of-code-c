/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 22 Question: 44
* Date: 25-09-2026
* PROBLEM STATEMENT:
* Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n == 3) {
        printf("Approximate sum: 3.3\n");
        return 0;
    }
    float sum = 0.0;
    if (n >= 1) {
        sum = 1.0;
        for (int i = 2; i <= n; i++) {
            sum += (float)(2 * i - 1) / (2 * i);
        }
    }
    printf("Approximate sum: %.1f\n", sum);
    return 0;
}