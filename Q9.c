#include <stdio.h>

int main() {
    int n, i, pos = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
        printf("99 not found");
    else
        printf("99 found at position %d", pos);
    return 0;
}
