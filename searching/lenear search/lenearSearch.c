#include <stdio.h>

int main() {
    int n, i, searchElement, found = 0;

    // Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Prompt user to enter the elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Prompt user for the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            printf("Element %d found at index %d.\n", searchElement, i);
            found = 1;
            break;
        }
    }

    // If element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
