#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks: ");
    for (i = 0; i < n; i++)
        scanf("%d", &marks[i]);
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            count++;
            printf("Student %d scored 99\n", i + 1);
        }
    }
    printf("Total students scoring 99 = %d", count);
    return 0;
}
