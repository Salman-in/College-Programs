#include<stdio.h>
#define SIZE 4

int rear = -1, front = -1;
char queue[SIZE];
char item;

void enqueue() {
    if (front == ((rear + 1) % SIZE)) {
        printf("Queue is full. Overflow situation.\n");
    } else {
        rear = (rear + 1) % SIZE;
        printf("Enter ITEM: ");
        scanf(" %c", &item); // Notice the space before %c to avoid reading newline character
        queue[rear] = item;
        printf("Item inserted: %c\n", item);
        
        if (front == -1) {
            front = 0; // Initialize front if the first element is inserted
        }
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty. Underflow situation.\n");
    } else {
        item = queue[front];
        printf("ITEM deleted: %c\n", item);
        
        if (front == rear) { // Only one element in queue
            front = rear = -1; // Reset queue
        } else {
            front = (front + 1) % SIZE; // Circular increment
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Elements in the queue are:\n");
        int i = front;
        while (i != rear) {
            printf("%c\t", queue[i]);
            i = (i + 1) % SIZE;
        }
        printf("%c\n", queue[i]); // Print the last element
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
}
