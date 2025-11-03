#include <stdio.h>

int main() {
    int n, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Array before deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nEnter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
