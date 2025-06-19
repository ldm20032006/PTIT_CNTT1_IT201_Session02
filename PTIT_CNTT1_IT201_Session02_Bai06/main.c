#include <stdio.h>
int main() {
    int a[100], n, pos, val;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap vi tri muon chen (0-%d): ", n);
    scanf("%d", &pos);

    printf("Nhap gia tri muon chen: ");
    scanf("%d", &val);

    if (pos < 0 || pos > n || n == 100) {
        printf("Khong hop le\n");
    } else {
        for (int i = n; i > pos; i--) {
            a[i] = a[i - 1];  // Dịch phần tử sang phải
        }
        a[pos] = val;
        n++;
        printf("Mang sau khi chen:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
