#include <stdio.h>

void getGraphComplement(int n, int adjMatrix[n][n], int complementMatrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                // No self-loops
                complementMatrix[i][j] = 0;
            } else {
                // Flip the edges
                complementMatrix[i][j] = (adjMatrix[i][j] == 0) ? 1 : 0;
            }
        }
    }
}

void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Input the number of vertices
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &n);

    int adjMatrix[n][n], complementMatrix[n][n];

    // Input the adjacency matrix
    printf("Enter the adjacency matrix of the graph:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adjMatrix[i][j]);
        }
    }

    // Compute the complement graph
    getGraphComplement(n, adjMatrix, complementMatrix);

    // Print the original graph
    printf("Original Graph Adjacency Matrix:\n");
    printMatrix(n, adjMatrix);

    // Print the complement graph
    printf("Complement Graph Adjacency Matrix:\n");
    printMatrix(n, complementMatrix);

    return 0;
}