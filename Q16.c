#include <stdio.h>

int main() {
    int n, i, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Array before insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nEnter position (1 for front, %d for end, or any between): ", n + 1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = val;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
