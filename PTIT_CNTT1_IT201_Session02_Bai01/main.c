#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 0) {
        return -1;
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr1[] = {-1, 5, -3, 2, 10, 19};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Phan tu lon nhat trong arr1: %d\n", findMax(arr1, n1));

    int arr2[] = {1, 4, 2, 6, 10, 15};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Phan tu lon nhat trong arr2: %d\n", findMax(arr2, n2));

    return 0;
}