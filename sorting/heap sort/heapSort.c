#include <stdio.h>

int main() {
    int n, i, j;

    // Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Prompt user to enter the elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Build max heap
    for (i = n / 2 - 1; i >= 0; i--) {
        int root = i;
        while (1) {
            int largest = root;
            int left = 2 * root + 1;
            int right = 2 * root + 2;

            if (left < n && arr[left] > arr[largest])
                largest = left;

            if (right < n && arr[right] > arr[largest])
                largest = right;

            if (largest != root) {
                // Swap arr[root] and arr[largest]
                int temp = arr[root];
                arr[root] = arr[largest];
                arr[largest] = temp;

                root = largest;
            } else {
                break;
            }
        }
    }

    // Perform heap sort
    for (i = n - 1; i > 0; i--) {
        // Move current root to end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Heapify reduced heap
        int root = 0;
        while (1) {
            int largest = root;
            int left = 2 * root + 1;
            int right = 2 * root + 2;

            if (left < i && arr[left] > arr[largest])
                largest = left;

            if (right < i && arr[right] > arr[largest])
                largest = right;

            if (largest != root) {
                // Swap arr[root] and arr[largest]
                int temp = arr[root];
                arr[root] = arr[largest];
                arr[largest] = temp;

                root = largest;
            } else {
                break;
            }
        }
    }

    // Display the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
