
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int q[MAX], front = 0, rear = 0, count = 0;

struct Node {
    int data;
    struct Node *next;
};

struct Node *first = NULL, *last = NULL;

void arrayEnqueue(int x) {
    if (count == MAX) {
        printf("Queue Overflow\n");
        return;
    }

    q[rear] = x;
    rear = (rear + 1) % MAX;
    count++;
}

void arrayDequeue() {
    if (count == 0) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted: %d\n", q[front]);
    front = (front + 1) % MAX;
    count--;
}

void arrayDisplay() {
    int i;
    for (i = 0; i < count; i++)
        printf("%d ", q[(front + i) % MAX]);
    printf("\n");
}

void linkedEnqueue(int x) {
    struct Node *p = malloc(sizeof(struct Node));
    p->data = x;
    p->next = NULL;

    if (last == NULL)
        first = last = p;
    else {
        last->next = p;
        last = p;
    }
}

void linkedDequeue() {
    if (first == NULL) {
        printf("Queue Underflow\n");
        return;
    }

    struct Node *temp = first;
    printf("Deleted: %d\n", temp->data);
    first = first->next;

    if (first == NULL)
        last = NULL;

    free(temp);
}

void linkedDisplay() {
    struct Node *temp = first;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int type, op, x;

    printf("1. Array Queue\n2. Linked List Queue\n");
    scanf("%d", &type);

    do {
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Exit\n");
        scanf("%d", &op);

        switch (op) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &x);
            if (type == 1)
                arrayEnqueue(x);
            else if (type == 2)
                linkedEnqueue(x);
            else
                printf("Invalid queue type\n");
            break;

        case 2:
            if (type == 1)
                arrayDequeue();
            else if (type == 2)
                linkedDequeue();
            else
                printf("Invalid queue type\n");
            break;

        case 3:
            if (type == 1)
                arrayDisplay();
            else if (type == 2)
                linkedDisplay();
            else
                printf("Invalid queue type\n");
            break;
        }
    } while (op != 4);

    return 0;
}
