#include <stdio.h>

int main() {
    int n, i, left, right, pivot, temp;
    int stack[1000]; // Stack to simulate function call stack
    int top = -1;

    // Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Prompt user to enter the elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize stack with initial values
    stack[++top] = 0; // Left index of initial range
    stack[++top] = n - 1; // Right index of initial range

    // Main loop to process elements in the stack
    while (top >= 0) {
        right = stack[top--]; // Pop right index
        left = stack[top--]; // Pop left index

        // Partitioning process
        pivot = arr[left]; // Set pivot as first element
        i = left + 1;
        int j = right;

        while (i <= j) {
            while (i <= j && arr[i] <= pivot)
                i++;
            while (i <= j && arr[j] > pivot)
                j--;
            if (i < j) {
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        // Swap pivot with arr[j]
        temp = arr[left];
        arr[left] = arr[j];
        arr[j] = temp;

        // Push left and right sub-arrays to stack if they exist
        if (left < j - 1) {
            stack[++top] = left;
            stack[++top] = j - 1;
        }
        if (j + 1 < right) {
            stack[++top] = j + 1;
            stack[++top] = right;
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
