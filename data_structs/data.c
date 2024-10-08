#include <stdio.h>
#include <stdlib.h>

// Linked List Node
struct Node {
    int data;
    struct Node *next;
};

// Create Linked List
struct Node* createNode(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Print Linked List
void printList(struct Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Stack
struct Stack {
    struct Node *top;
};

// Create Stack
struct Stack* createStack() {
    struct Stack* stack = malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

// Push to Stack
void push(struct Stack *s, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = s->top;
    s->top = newNode;
}

// Pop from Stack
int pop(struct Stack *s) {
    if (!s->top) return -1; // Underflow
    int data = s->top->data;
    struct Node* temp = s->top;
    s->top = s->top->next;
    free(temp);
    return data;
}

// Queue
struct Queue {
    struct Node *front, *rear;
};

// Create Queue
struct Queue* createQueue() {
    struct Queue* q = malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// Enqueue
void enqueue(struct Queue *q, int data) {
    struct Node* newNode = createNode(data);
    if (!q->rear) {
        q->front = q->rear = newNode;
        return;
    }
    q->rear->next = newNode;
    q->rear = newNode;
}

// Dequeue
int dequeue(struct Queue *q) {
    if (!q->front) return -1; // Underflow
    struct Node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;
    if (!q->front) q->rear = NULL;
    free(temp);
    return data;
}

// Main Function
int main() {
    // Linked List
    struct Node* head = createNode(1);
    head->next = createNode(2);
    printList(head);  // Output: 1 -> 2 -> NULL

    // Stack
    struct Stack* stack = createStack();
    push(stack, 10);
    printf("Popped from stack: %d\n", pop(stack));  // Output: 10

    // Queue
    struct Queue* queue = createQueue();
    enqueue(queue, 30);
    printf("Dequeued from queue: %d\n", dequeue(queue));  // Output: 30

    return 0;
}
