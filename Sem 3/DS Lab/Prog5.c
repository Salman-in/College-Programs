#include<stdio.h>
#include<stdlib.h>

int count; // Keeps track of the number of students (nodes)

struct node {
    char usn[15],name[20],dept[20],phno[15];
    float marks1, marks2, marks3;
    struct node *llink; // Link to the previous node
    struct node *rlink; // Link to the next node
};

typedef struct node *NODE;
NODE first = NULL; // Head of the doubly linked list

// Function to allocate memory for a new node
NODE getnode() {
    NODE x;
    x = (NODE)malloc(sizeof(struct node)); // Allocate memory for a new node
    return x;
}

// Function to create a new node by getting student details
NODE create_node() {
    NODE temp;
    temp = getnode();
    printf("Enter Student's Details: \n");
    printf("Enter USN: ");
    scanf("%s", temp->usn);
    printf("Enter Name: ");
    scanf("%s", temp->name);
    printf("Enter Department: ");
    scanf("%s", temp->dept);
    printf("Enter Marks 1: ");
    scanf("%f", &(temp->marks1));
    printf("Enter Marks 2: ");
    scanf("%f", &(temp->marks2));
    printf("Enter Marks 3: ");
    scanf("%f", &(temp->marks3));
    printf("Enter Phone No: ");
    scanf("%s", temp->phno);
    
    temp->llink = NULL; // No previous node
    temp->rlink = NULL; // No next node
    count++; // Increase node count
    return temp;
}

// Function to display details of the student being deleted
void disp_deleted(NODE temp) {
    printf("The following Student's details are deleted:\n");
    printf("USN | Name | Dept | Marks1 | Marks2 | Marks3 | Ph. No\n");
    printf("------------------------------------------------------------\n");
    printf("%s | %s | %s | %.2f | %.2f | %.2f | %s\n", temp->usn, temp->name, temp->dept,
           temp->marks1, temp->marks2, temp->marks3, temp->phno);
    count--; // Decrease node count
}

// Function to insert a node at the front (head) of the DLL
void insert_front() {
    NODE temp;
    temp = create_node(); // Create a new node
    if (first == NULL) {
        first = temp; // If the list is empty, the new node is the first node
    } else {
        temp->rlink = first; // New node points to the current first node
        first->llink = temp; // Current first node points to the new node
        first = temp; // Update first to the new node
    }
}

// Function to delete a node from the front (head) of the DLL
void delete_front() {
    NODE temp;
    if (first == NULL) {
        printf("List is empty\n");
    } else if (first->rlink == NULL) {
        disp_deleted(first);
        free(first);
        first = NULL; // List becomes empty
    } else {
        temp = first;
        disp_deleted(temp);
        first = first->rlink; // Move the first pointer to the next node
        first->llink = NULL; // Set the previous link of the new first node to NULL
        free(temp); // Free the memory of the deleted node
    }
}

// Function to insert a node at the rear (end) of the DLL
void insert_rear() {
    NODE temp, cur;
    temp = create_node();
    if (first == NULL) {
        first = temp; // If the list is empty, the new node is the first node
    } else {
        cur = first;
        while (cur->rlink != NULL) { // Traverse to the last node
            cur = cur->rlink;
        }
        cur->rlink = temp; // Last node's right link points to the new node
        temp->llink = cur; // New node's left link points to the last node
    }
}

// Function to delete a node from the rear (end) of the DLL
void delete_rear() {
    NODE cur;
    if (first == NULL) {
        printf("List is empty\n");
    } else if (first->rlink == NULL) {
        disp_deleted(first);
        free(first);
        first = NULL; // List becomes empty
    } else {
        cur = first;
        while (cur->rlink != NULL) { // Traverse to the last node
            cur = cur->rlink;
        }
        disp_deleted(cur);
        cur->llink->rlink = NULL; // Second last node's right link becomes NULL
        free(cur); // Free the memory of the last node
    }
}

// Function to display all the student records in the DLL
void display() {
    NODE cur;
    float total, average;
    if (first == NULL) {
        printf("List is empty\n");
    } else {
        cur = first;
        printf("Student details in Doubly Linked List:\n");
        printf("USN | Name | Dept | Marks1 | Marks2 | Marks3 | Total Marks | Average | Ph. No\n");
        printf("------------------------------------------------------------\n");
        while (cur != NULL) {
            total = cur->marks1 + cur->marks2 + cur->marks3;
            average = total / 3;
            printf("%s | %s | %s | %.2f | %.2f | %.2f | %.2f | %.2f | %s\n", cur->usn,
                   cur->name, cur->dept, cur->marks1, cur->marks2, cur->marks3, total, average, cur->phno);
            cur = cur->rlink; // Move to the next node
        }
        printf("------------------------------------------------------------\n");
        printf("Number of nodes = %d\n", count);
    }
}

// Main function to control the menu and operations
int main() {
    int choice, n, i;
    while (1) {
        printf("------------------------------------------MENU---------------------------------\n");
        printf("1. Create a DLL of N students by using End Insertion\n");
        printf("2. Display Status and Count of nodes\n");
        printf("3. Insertion at rear\n");
        printf("4. Deletion at rear\n");
        printf("5. Insertion at front\n");
        printf("6. Deletion at front\n");
        printf("7. Exit\n");
        printf("----------------------------------------------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter number of students: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    insert_rear(); // Insert at rear N times
                }
                break;
            case 2:
                display(); // Display the list
                break;
            case 3:
                insert_rear(); // Insert at rear
                break;
            case 4:
                delete_rear(); // Delete from rear
                break;
            case 5:
                insert_front(); // Insert at front
                break;
            case 6:
                delete_front(); // Delete from front
                break;
            case 7:
                return 0; // Exit the program
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
