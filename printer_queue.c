#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Represents a single print job
struct PrintJob {
    int jobId;
    char fileName[100];
    char userName[50];
};

// Represents a node in the queue
struct Node {
    struct PrintJob job;
    struct Node* next;
};

// Pointers to the front and rear of the queue
struct Node *front = NULL;
struct Node *rear = NULL;

// Counter for unique job IDs
int jobCounter = 1;

// Function Prototypes
void enqueue();
