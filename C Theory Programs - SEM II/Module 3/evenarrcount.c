#include <stdio.h>

int main() {
    int arr[100], n, i, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEven numbers in the array: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    printf("\nTotal even numbers: %d\n", count);

    return 0;
}