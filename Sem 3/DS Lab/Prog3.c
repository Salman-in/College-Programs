#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20

typedef struct {
    int front, rear;
    int item[MAXSIZE];
} queue;

queue q1, q2, q3, q4;
int a[MAXSIZE], no = 0;

void insert(queue *q, int n) {
    if (q->rear == MAXSIZE - 1) {
        printf("Queue is full.\n");
    } else {
        q->item[++q->rear] = n;
    }
}

int delete(queue *q) {
    if (q->rear < q->front) {
        printf("Queue is empty.\n");
        return -1; // Indicate error
    } else {
        return q->item[q->front++];
    }
}

void displayQ(queue *q) {
    no++;
    if (q->rear < q->front) {
        printf("Group %d: Queue is empty.\n", no);
    } else {
        printf("Group %d: Contents of queue are:\n", no);
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d\t", q->item[i]);
        }
    }
    printf("\n");
}

void displaySorted(int a[], int size) {
    printf("Group %d: Contents after sorting:\n", no);
    for (int i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int element = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > element) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = element;
    }
}

void sortqueue(queue *q) {
    int size = 0;
    while (q->front <= q->rear) {
        a[size++] = delete(q);
    }
    insertionSort(a, size);
    displaySorted(a, size);
}

void main() {
    q1.front = 0, q2.front = 0, q3.front = 0, q4.front = 0;
    q1.rear = -1, q2.rear = -1, q3.rear = -1, q4.rear = -1;

    int n;
    printf("Enter how many elements:\n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    int input;
    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        if (input >= 0 && input < 10) {
            insert(&q1, input);
        } else if (input >= 10 && input < 20) {
            insert(&q2, input);
        } else if (input >= 20 && input < 30) {
            insert(&q3, input);
        } else {
            insert(&q4, input);
        }
    }

    printf("Categorized data into different groups:\n");
    displayQ(&q1);
    displayQ(&q2);
    displayQ(&q3);
    displayQ(&q4);

    printf("\nSorted data:\n");
    sortqueue(&q1);
    sortqueue(&q2);
    sortqueue(&q3);
    sortqueue(&q4);
}
