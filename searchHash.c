
#include <stdio.h>

#define SIZE 10

void linearSearch(int a[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at position %d\n", i + 1);
            return;
        }
    }
    printf("Element not found\n");
}

void binarySearch(int a[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (a[mid] == key) {
            printf("Found at position %d\n", mid + 1);
            return;
        }

        if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found\n");
}

void hashing(int a[], int n) {
    int table[SIZE], i, index, start;

    for (i = 0; i < SIZE; i++)
        table[i] = -1;

    for (i = 0; i < n; i++) {
        index = ((a[i] % SIZE) + SIZE) % SIZE;
        start = index;

        while (table[index] != -1) {
            index = (index + 1) % SIZE;

            if (index == start) {
                printf("Hash table full\n");
                return;
            }
        }

        table[index] = a[i];
    }

    printf("Hash Table:\n");
    for (i = 0; i < SIZE; i++)
        printf("%d -> %d\n", i, table[i]);
}

int main() {
    int a[100], n, key, choice, i;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter elements in ascending order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do {
        printf("\n1. Linear Search");
        printf("\n2. Binary Search");
        printf("\n3. Hashing");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter key: ");
            scanf("%d", &key);
            linearSearch(a, n, key);
            break;

        case 2:
            printf("Enter key: ");
            scanf("%d", &key);
            binarySearch(a, n, key);
            break;

        case 3:
            hashing(a, n);
            break;

        case 4:
            break;

        default:
            printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
