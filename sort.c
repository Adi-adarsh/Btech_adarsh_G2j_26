
#include <stdio.h>

void bubbleSort(int a[], int n) {
    int i, j, temp, swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0;

        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }

        if (!swapped)
            break;
    }
}

void insertionSort(int a[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void selectionSort(int a[], int n) {
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a[100], b[100], c[100];
    int n, i, choice;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = c[i] = a[i];
    }

    printf("\n1. Bubble Sort");
    printf("\n2. Insertion Sort");
    printf("\n3. Selection Sort");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        bubbleSort(a, n);
        printf("Bubble Sort: ");
        display(a, n);
        break;

    case 2:
        insertionSort(b, n);
        printf("Insertion Sort: ");
        display(b, n);
        break;

    case 3:
        selectionSort(c, n);
        printf("Selection Sort: ");
        display(c, n);
        break;

    default:
        printf("Invalid choice\n");
    }

    return 0;
}
