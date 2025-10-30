#include <stdio.h>

#define MAX 100

int parent[MAX];

void initialize(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
}

int find(int x) {
    if (parent[x] == x)
        return x;
    else
        return find(parent[x]);
}

void unionSet(int x, int y) {
    int parentX = find(x);
    int parentY = find(y);

    if (parentX == parentY) {
        printf("Elements %d and %d are already in the same set.\n", x, y);
    } else {
        parent[parentY] = parentX;
        printf("Union done between %d and %d.\n", x, y);
    }
}

void display(int n) {
    printf("\nElement : Parent\n");
    for (int i = 1; i <= n; i++) {
        printf("   %d     :   %d\n", i, parent[i]);
    }
}

int main() {
    int n, choice, a, b;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    initialize(n);

    do {
        printf("\n--- Disjoint Set Operations ---\n");
        printf("1. Find parent of an element\n");
        printf("2. Union of two sets\n");
        printf("3. Display parent array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &a);
                printf("Parent of %d is %d\n", a, find(a));
                break;

            case 2:
                printf("Enter two elements to union: ");
                scanf("%d %d", &a, &b);
                unionSet(a, b);
                break;

            case 3:
                display(n);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

