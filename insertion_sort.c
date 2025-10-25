#include <stdio.h>

int main() {
    int arr[5] = {5, 3, 4, 1, 2};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int key = arr[i];      // Current element to insert
        int j = i - 1;

        // Move elements that are greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place key at the correct position
        arr[j + 1] = key;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
