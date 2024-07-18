#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;
    int choice, value, position, i;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at a specific position\n");
        printf("4. Delete from the beginning\n");
        printf("5. Delete from the end\n");
        printf("6. Delete from a specific position\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insert at the beginning
                newNode = (struct Node*)malloc(sizeof(struct Node));
                if (newNode == NULL) {
                    printf("Memory allocation failed\n");
                    break;
                }
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                newNode->data = value;
                newNode->next = head;
                head = newNode;
                printf("Node inserted at the beginning\n");
                break;

            case 2: // Insert at the end
                newNode = (struct Node*)malloc(sizeof(struct Node));
                if (newNode == NULL) {
                    printf("Memory allocation failed\n");
                    break;
                }
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                newNode->data = value;
                newNode->next = NULL;
                if (head == NULL) {
                    head = newNode;
                } else {
                    temp = head;
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newNode;
                }
                printf("Node inserted at the end\n");
                break;

            case 3: // Insert at a specific position
                printf("Enter the position to insert at: ");
                scanf("%d", &position);
                if (position < 1) {
                    printf("Invalid position\n");
                    break;
                }
                newNode = (struct Node*)malloc(sizeof(struct Node));
                if (newNode == NULL) {
                    printf("Memory allocation failed\n");
                    break;
                }
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                newNode->data = value;
                if (position == 1) {
                    newNode->next = head;
                    head = newNode;
                } else {
                    temp = head;
                    for (i = 1; i < position - 1 && temp != NULL; i++) {
                        temp = temp->next;
                    }
                    if (temp == NULL) {
                        printf("Position out of bounds\n");
                        free(newNode);
                    } else {
                        newNode->next = temp->next;
                        temp->next = newNode;
                    }
                }
                printf("Node inserted at position %d\n", position);
                break;

            case 4: // Delete from the beginning
                if (head == NULL) {
                    printf("List is empty\n");
                    break;
                }
                temp = head;
                head = head->next;
                free(temp);
                printf("Node deleted from the beginning\n");
                break;

            case 5: // Delete from the end
                if (head == NULL) {
                    printf("List is empty\n");
                    break;
                }
                if (head->next == NULL) {
                    free(head);
                    head = NULL;
                } else {
                    temp = head;
                    while (temp->next->next != NULL) {
                        temp = temp->next;
                    }
                    free(temp->next);
                    temp->next = NULL;
                }
                printf("Node deleted from the end\n");
                break;

            case 6: // Delete from a specific position
                printf("Enter the position to delete from: ");
                scanf("%d", &position);
                if (position < 1 || head == NULL) {
                    printf("Invalid position or list is empty\n");
                    break;
                }
                if (position == 1) {
                    temp = head;
                    head = head->next;
                    free(temp);
                } else {
                    temp = head;
                    struct Node* prev = NULL;
                    for (i = 1; i < position && temp != NULL; i++) {
                        prev = temp;
                        temp = temp->next;
                    }
                    if (temp == NULL) {
                        printf("Position out of bounds\n");
                    } else {
                        prev->next = temp->next;
                        free(temp);
                    }
                }
                printf("Node deleted from position %d\n", position);
                break;

            case 7: // Display
                if (head == NULL) {
                    printf("List is empty\n");
                    break;
                }
                temp = head;
                printf("Linked list elements: ");
                while (temp != NULL) {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }
                printf("NULL\n");
                break;

            case 8: // Exit
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}
