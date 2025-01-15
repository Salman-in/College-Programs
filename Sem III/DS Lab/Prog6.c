#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Definition of the node structure
struct node {
    int coef;
    int expox;
    int expoy;
    int expoz;
    struct node *link;
};
typedef struct node *NODE;

// Function to create a new node
NODE createNode(int coef, int ex, int ey, int ez) {
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->coef = coef;
    temp->expox = ex;
    temp->expoy = ey;
    temp->expoz = ez;
    temp->link = NULL;
    return temp;
}

// Function to create a head node
NODE createHeadNode() {
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->coef = 0;
    temp->expox = -1;
    temp->expoy = -1;
    temp->expoz = -1;
    temp->link = temp;
    return temp;
}

// Function to insert a node at the end of the list
void insert_rear(int coef, int ex, int ey, int ez, NODE head)
{
    NODE temp, cur;
    
    // Create a new node with given values
    temp = createNode(coef, ex, ey, ez);

    // Check if the list is empty (head points to itself)
    if (head->link == head)
    {
        head->link = temp;  // If empty, point head to new node
    }
    else
    {
        cur = head;
        
        // Traverse to the last node (where link points to head)
        while (cur->link != head)
        {
            cur = cur->link;
        }

        // Insert the new node after the last node
        cur->link = temp;
    }

    // Make the new node point to head to maintain the circular structure
    temp->link = head;

    // Increment the node count stored in the head node
    head->coef = (head->coef) + 1;
}


// Function to create a polynomial
void createPoly(NODE poly) {
    int n, coef, ex, ey, ez;
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the coefficient: ");
        scanf("%d", &coef);
        printf("Enter the exponents of (x, y, z): ");
        scanf("%d %d %d", &ex, &ey, &ez);
        insert_rear(coef, ex, ey, ez, poly);
    }
}

// Function to display a polynomial
void display(NODE head) {
    NODE cur;
    if (head->link == head) {
        printf("List is empty\n");
    } else {
        cur = head->link;
        while (cur != head) {
            if (cur->coef < 0)
                printf("%dx^%dy^%dz^%d ", cur->coef, cur->expox, cur->expoy, cur->expoz);
            else
                printf("+%dx^%dy^%dz^%d ", cur->coef, cur->expox, cur->expoy, cur->expoz);
            cur = cur->link;
        }
        printf("\nNumber of terms = %d\n", head->coef);
    };
}

// Function to evaluate a polynomial
double evaluate(int x, int y, int z, NODE head)
{
    double result = 0;
    NODE cur;
    if (head->link == head)
    {
        printf("List is empty\n");
    }
    else
    {
        cur = head->link;
        while (cur != head)
        {
            result += cur->coef * pow(x, cur->expox) * pow(y, cur->expoy) * pow(z, cur->expoz);
            cur = cur->link;
        }
    }
    return result;
}


// Function to add two polynomials
NODE polyadd(NODE a, NODE b)
{
    NODE c, starta, startb;
    int sum = 0;
    
    starta = a;  // Remember the start of list a
    startb = b;  // Remember the start of list b
    
    a = a->link; // Start from the first term of polynomial a
    b = b->link; // Start from the first term of polynomial b
    
    c = createHeadNode(); // Create a new head node for the result polynomial
    
    // Traverse both polynomials and add their terms
    while ((a != starta) && (b != startb))
    {
        if ((a->expox == b->expox) && (a->expoy == b->expoy) && (a->expoz == b->expoz))
        {
            // If the exponents of the terms are the same, add their coefficients
            sum = a->coef + b->coef;
            insert_rear(sum, a->expox, a->expoy, a->expoz, c);
            a = a->link;  // Move to the next term in polynomial a
            b = b->link;  // Move to the next term in polynomial b
        }
        else if (a->expox > b->expox)
        {
            // If the exponent of x in polynomial a is greater, take that term
            insert_rear(a->coef, a->expox, a->expoy, a->expoz, c);
            a = a->link;  // Move to the next term in polynomial a
        }
        else if ((a->expox == b->expox) && (a->expoy > b->expoy))
        {
            // If exponents of x are equal, but exponent of y in polynomial a is greater
            insert_rear(a->coef, a->expox, a->expoy, a->expoz, c);
            a = a->link;  // Move to the next term in polynomial a
        }
        else if ((a->expox == b->expox) && (a->expoy == b->expoy) && (a->expoz > b->expoz))
        {
            // If exponents of x and y are equal, but exponent of z in polynomial a is greater
            insert_rear(a->coef, a->expox, a->expoy, a->expoz, c);
            a = a->link;  // Move to the next term in polynomial a
        }
        else
        {
            // If none of the above cases match, take the term from polynomial b
            insert_rear(b->coef, b->expox, b->expoy, b->expoz, c);
            b = b->link;  // Move to the next term in polynomial b
        }
    }

    // Attach any remaining terms from polynomial a or b
    while (a != starta)
    {
        insert_rear(a->coef, a->expox, a->expoy, a->expoz, c);
        a = a->link;
    }

    while (b != startb)
    {
        insert_rear(b->coef, b->expox, b->expoy, b->expoz, c);
        b = b->link;
    }

    return c;  // Return the resulting polynomial (sum of a and b)
}

// Main function
int main() {
    int x, y, z;
    double eval = 0;
    NODE poly1 = NULL;
    NODE poly2 = NULL;
    NODE polysum = NULL;

    // Polynomial Evaluation
    printf("*****Evaluation of a Polynomial****\n");
    poly1 = createHeadNode();
    createPoly(poly1);
    printf("Polynomial is:\n");
    display(poly1);
    printf("Enter the values for x,y,z: ");
    scanf("%d%d%d", &x, &y, &z);
    eval = evaluate(x, y, z, poly1);
    printf("Polynomial Evaluation value = %.2f \n", eval);

    // Polynomial Addition
    printf("\n*****Addition of two polynomials*****\n");
    poly1 = NULL;
    poly1 = createHeadNode();
    createPoly(poly1);
    poly2 = createHeadNode();
    createPoly(poly2);
    printf("Polynomial-1 is:\n");
    display(poly1);
    printf("Polynomial-2 is:\n");
    display(poly2);
    polysum = polyadd(poly1, poly2);
    printf("Polynomial sum is:\n");
    display(polysum);

    return 0;
}
