#include <stdio.h>

int main() {
    int n, i, searchElement, left, right, mid, found = 0;

    // Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Prompt user to enter the elements
    printf("Enter %d sorted integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Prompt user for the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Perform binary search
    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == searchElement) {
            printf("Element %d found at index %d.\n", searchElement, mid);
            found = 1;
            break;
        }

        if (arr[mid] < searchElement) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // If element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
