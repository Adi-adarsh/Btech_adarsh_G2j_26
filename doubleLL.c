
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* insertEnd(struct Node *head, int x) {
    struct Node *p = malloc(sizeof(struct Node));
    p->data = x;
    p->prev = NULL;
    p->next = NULL;

    if (head == NULL)
        return p;

    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = p;
    p->prev = temp;
    return head;
}

void displayForward(struct Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void displayBackward(struct Node *head) {
    if (head == NULL)
        return;

    while (head->next != NULL)
        head = head->next;

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->prev;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;
    int n, x, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        head = insertEnd(head, x);
    }

    printf("Forward: ");
    displayForward(head);

    printf("Backward: ");
    displayBackward(head);

    return 0;
}
