/*
- Name: Anurag Negi
- Roll: 590038663
- Day: 28 Question: 56
- Date: 17-11-2026
- PROBLEM STATEMENT:
- Read and print elements of a one-dimensional array.
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}