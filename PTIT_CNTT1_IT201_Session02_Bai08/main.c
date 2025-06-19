#include <stdio.h>
int main() {
    int a[100], n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Cac phan tu lon hon tat ca phan tu sau no:\n");
    int maxRight = a[n - 1];
    printf("%d", maxRight);
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > maxRight) {
            printf(",%d", a[i]);
            maxRight = a[i];
        }
    }
    return 0;
}
