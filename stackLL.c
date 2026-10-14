
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int a[MAX], top = -1;

struct Node {
    int data;
    struct Node *next;
};

struct Node *stack = NULL;

void arrayPush(int x) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        a[++top] = x;
}

void arrayPop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped: %d\n", a[top--]);
}

void arrayDisplay() {
    int i;
    for (i = top; i >= 0; i--)
        printf("%d ", a[i]);
    printf("\n");
}

void linkedPush(int x) {
    struct Node *p = malloc(sizeof(struct Node));
    p->data = x;
    p->next = stack;
    stack = p;
}

void linkedPop() {
    if (stack == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    struct Node *temp = stack;
    printf("Popped: %d\n", temp->data);
    stack = stack->next;
    free(temp);
}

void linkedDisplay() {
    struct Node *temp = stack;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int type, op, x;

    printf("1. Array Stack\n2. Linked List Stack\n");
    scanf("%d", &type);

    do {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\n");
        scanf("%d", &op);

        switch (op) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &x);
            if (type == 1)
                arrayPush(x);
            else if (type == 2)
                linkedPush(x);
            else
                printf("Invalid stack type\n");
            break;

        case 2:
            if (type == 1)
                arrayPop();
            else if (type == 2)
                linkedPop();
            else
                printf("Invalid stack type\n");
            break;

        case 3:
            if (type == 1)
                arrayDisplay();
            else if (type == 2)
                linkedDisplay();
            else
                printf("Invalid stack type\n");
            break;
        }
    } while (op != 4);

    return 0;
}
