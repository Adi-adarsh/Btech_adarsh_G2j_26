
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* insertSingly(struct Node *head, int x) {
    struct Node *p = malloc(sizeof(struct Node));
    p->data = x;
    p->next = NULL;

    if (head == NULL)
        return p;

    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = p;
    return head;
}

void displaySingly(struct Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct Node* insertCircular(struct Node *head, int x) {
    struct Node *p = malloc(sizeof(struct Node));
    p->data = x;

    if (head == NULL) {
        p->next = p;
        return p;
    }

    struct Node *temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = p;
    p->next = head;
    return head;
}

void displayCircular(struct Node *head) {
    if (head == NULL) {
        printf("Empty list\n");
        return;
    }

    struct Node *temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("\n");
}

int main() {
    struct Node *head = NULL, *circular = NULL;
    int n, x, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter singly linked list elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        head = insertSingly(head, x);
    }

    printf("Singly Linked List: ");
    displaySingly(head);

    printf("Enter circular linked list elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        circular = insertCircular(circular, x);
    }

    printf("Circular Linked List: ");
    displayCircular(circular);

    return 0;
}
