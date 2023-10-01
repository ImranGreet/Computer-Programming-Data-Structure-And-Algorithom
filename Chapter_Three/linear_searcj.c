#include <stdio.h>

int linear_search(int A[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int x = 4;

    int result = linear_search(A, n, x);

    if (result != -1) {
        printf("Element %d found at index %d\n", x, result);
    } else {
        printf("Element %d not found in the array\n", x);
    }

    return 0;
}
