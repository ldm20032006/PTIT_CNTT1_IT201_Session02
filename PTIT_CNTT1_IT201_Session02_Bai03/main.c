#include <stdio.h>

int main() {
    int n, a[100];
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Đảo mảng tại chỗ
    for (int i = 0; i < n / 2; i++) {
        int tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
    printf("Mang sau khi dao nguoc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
