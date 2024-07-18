#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Define the maximum size of the stack

int main() {
    int stack[MAX];
    int top = -1; // Initialize stack pointer to -1 (empty stack)
    int choice, value;

    while (1) {
        // Display menu
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Push operation
                if (top == MAX - 1) {
                    printf("Stack overflow! Cannot push more elements.\n");
                } else {
                    printf("Enter the value to push: ");
                    scanf("%d", &value);
                    top++;
                    stack[top] = value;
                    printf("%d pushed onto the stack.\n", value);
                }
                break;

            case 2: // Pop operation
                if (top == -1) {
                    printf("Stack underflow! Cannot pop elements.\n");
                } else {
                    value = stack[top];
                    top--;
                    printf("%d popped from the stack.\n", value);
                }
                break;

            case 3: // Display operation
                if (top == -1) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack elements:\n");
                    for (int i = top; i >= 0; i--) {
                        printf("%d\n", stack[i]);
                    }
                }
                break;

            case 4: // Exit
                exit(0);
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
