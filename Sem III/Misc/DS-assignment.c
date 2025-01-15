#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BOOKS 100
#define MAX_QUEUE 50

// Book structure
typedef struct {
    char isbn[20];
    char title[50];
    char author[50];
    int is_available; // 1 = available, 0 = lent out
} Book;

// Library structure
typedef struct {
    Book books[MAX_BOOKS];
    int count;
} Library;

// Lending Queue structure
typedef struct {
    char isbn_queue[MAX_QUEUE][20];
    int front, rear;
} LendingQueue;

// Function prototypes
void init_library(Library *library);
void add_book(Library *library, const char *isbn, const char *title, const char *author);
void display_books(Library *library);
void lend_book(Library *library, const char *isbn);
void return_book(Library *library, const char *isbn);

void init_queue(LendingQueue *queue);
void enqueue(LendingQueue *queue, const char *isbn);
void process_request(Library *library, LendingQueue *queue);

int main() {
    Library library;
    LendingQueue lending_queue;

    // Initialize the library and queue
    init_library(&library);
    init_queue(&lending_queue);

    int choice;
    char isbn[20], title[50], author[50];

    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Add Lending Request\n");
        printf("4. Process Lending Request\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Add Book
                printf("Enter ISBN: ");
                scanf("%s", isbn);
                printf("Enter Title: ");
                scanf(" %[^\n]", title); // To handle spaces in input
                printf("Enter Author: ");
                scanf(" %[^\n]", author);
                add_book(&library, isbn, title, author);
                break;

            case 2: // Display Books
                display_books(&library);
                break;

            case 3: // Add Lending Request
                printf("Enter ISBN of the book to request: ");
                scanf("%s", isbn);
                enqueue(&lending_queue, isbn);
                break;

            case 4: // Process Lending Request
                process_request(&library, &lending_queue);
                break;

            case 5: // Return Book
                printf("Enter ISBN of the book to return: ");
                scanf("%s", isbn);
                return_book(&library, isbn);
                break;

            case 6: // Exit
                printf("Exiting the Library Management System.\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Initialize library
void init_library(Library *library) {
    library->count = 0;
}

// Add a book to the library
void add_book(Library *library, const char *isbn, const char *title, const char *author) {
    if (library->count >= MAX_BOOKS) {
        printf("Library is full, cannot add more books.\n");
        return;
    }
    strcpy(library->books[library->count].isbn, isbn);
    strcpy(library->books[library->count].title, title);
    strcpy(library->books[library->count].author, author);
    library->books[library->count].is_available = 1; // Set as available
    library->count++;
    printf("Book '%s' added successfully.\n", title);
}

// Display all books in the library
void display_books(Library *library) {
    printf("\nLibrary Books:\n");
    for (int i = 0; i < library->count; i++) {
        printf("ISBN: %s, Title: %s, Author: %s, Status: %s\n",
               library->books[i].isbn,
               library->books[i].title,
               library->books[i].author,
               library->books[i].is_available ? "Available" : "Lent Out");
    }
}

// Lend a book
void lend_book(Library *library, const char *isbn) {
    for (int i = 0; i < library->count; i++) {
        if (strcmp(library->books[i].isbn, isbn) == 0) {
            if (library->books[i].is_available) {
                library->books[i].is_available = 0;
                printf("Book '%s' has been lent.\n", library->books[i].title);
                return;
            } else {
                printf("Book '%s' is already lent out.\n", library->books[i].title);
                return;
            }
        }
    }
    printf("No book found with ISBN %s.\n", isbn);
}

// Return a book
void return_book(Library *library, const char *isbn) {
    for (int i = 0; i < library->count; i++) {
        if (strcmp(library->books[i].isbn, isbn) == 0) {
            if (!library->books[i].is_available) {
                library->books[i].is_available = 1;
                printf("Book '%s' has been returned.\n", library->books[i].title);
                return;
            } else {
                printf("Book '%s' was not lent out.\n", library->books[i].title);
                return;
            }
        }
    }
    printf("No book found with ISBN %s.\n", isbn);
}

// Initialize lending queue
void init_queue(LendingQueue *queue) {
    queue->front = 0;
    queue->rear = 0;
}

// Add a request to the queue
void enqueue(LendingQueue *queue, const char *isbn) {
    if ((queue->rear + 1) % MAX_QUEUE == queue->front) {
        printf("Queue is full, cannot add more requests.\n");
        return;
    }
    strcpy(queue->isbn_queue[queue->rear], isbn);
    queue->rear = (queue->rear + 1) % MAX_QUEUE;
    printf("Request for book with ISBN %s added to the queue.\n", isbn);
}

// Process lending requests
void process_request(Library *library, LendingQueue *queue) {
    if (queue->front == queue->rear) {
        printf("No lending requests in the queue.\n");
        return;
    }
    char isbn[20];
    strcpy(isbn, queue->isbn_queue[queue->front]);
    queue->front = (queue->front + 1) % MAX_QUEUE;
    lend_book(library, isbn);
}
