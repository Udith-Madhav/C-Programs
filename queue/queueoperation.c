#include <stdio.h>

#define MAX 100

int main() {
    int queue[MAX];
    int front = -1, rear = -1;
    int choice, value;

    while (1) {
        // Display menu
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operations based on user choice
        switch (choice) {
            case 1: // Enqueue
                if (rear == MAX - 1) {
                    printf("Queue is full! Cannot enqueue.\n");
                } else {
                    printf("Enter the value to enqueue: ");
                    scanf("%d", &value);
                    if (front == -1) front = 0;
                    rear++;
                    queue[rear] = value;
                    printf("Enqueued %d\n", value);
                }
                break;

            case 2: // Dequeue
                if (front == -1 || front > rear) {
                    printf("Queue is empty! Cannot dequeue.\n");
                } else {
                    printf("Dequeued %d\n", queue[front]);
                    front++;
                    if (front > rear) {
                        front = rear = -1; // Reset queue if empty
                    }
                }
                break;

            case 3: // Display
                if (front == -1) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Queue elements: ");
                    for (int i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4: // Exit
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
