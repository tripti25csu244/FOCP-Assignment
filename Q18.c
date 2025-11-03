#include <stdio.h>

int main() {
    int n, i, j, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Duplicate elements: ");
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > 1) {
            int alreadyPrinted = 0;
            for (j = 0; j < i; j++) {
                if (arr[i] == arr[j]) {
                    alreadyPrinted = 1;
                    break;
                }
            }
            if (!alreadyPrinted) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }
    if (!found)
        printf("-1");
    return 0;
}
