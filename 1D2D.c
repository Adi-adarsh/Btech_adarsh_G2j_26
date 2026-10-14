
#include <stdio.h>

int main() {
    int a[100], b[10][10];
    int n, r, c, i, j;

    printf("Enter size of 1D array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size");
        return 0;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("1D Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nEnter rows and columns: ");
    scanf("%d%d", &r, &c);

    if (r < 1 || r > 10 || c < 1 || c > 10) {
        printf("Invalid dimensions");
        return 0;
    }

    printf("Enter 2D array elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("2D Array:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}
