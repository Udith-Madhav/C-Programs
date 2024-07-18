#include <stdio.h>

int main() {
    int n, great;
    printf("Enter the limit: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    great = arr[0]; // Initialize `great` with the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > great) {
            great = arr[i];
        }
    }

    printf("Greatest number in the list is %d\n", great);

    return 0;
}
