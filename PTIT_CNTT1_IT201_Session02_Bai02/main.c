#include <stdio.h>

int main() {
    int n, x, a[100], count = 0;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    printf("Nhap mang %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap so can dem x: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (a[i] == x) count++;
    }

    printf("So lan xuat hien cua %d la: %d\n", x, count);

    return 0;
}
