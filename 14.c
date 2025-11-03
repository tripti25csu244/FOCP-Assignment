#include <stdio.h>

int main() {
    int n, i, j, count = 0, isPrime;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        if (arr[i] < 2)
            continue;
        isPrime = 1;
        for (j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            count++;
    }
    printf("Number of prime numbers = %d", count);
    return 0;
}
