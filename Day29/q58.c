/*
- Name: Anurag Negi
- Roll: 590038663
- Day: 29 Question: 58
- Date: 17-11-2026
- PROBLEM STATEMENT:
- Find the maximum and minimum element in an array.
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Max=%d, Min=%d", max, min);
    return 0;
}