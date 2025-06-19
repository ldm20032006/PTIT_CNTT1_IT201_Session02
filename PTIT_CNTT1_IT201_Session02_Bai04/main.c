#include <stdio.h>
int main() {
    int n, a[100], pos, val;
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap vi tri muon sua (0-%d): ", n - 1);
    scanf("%d", &pos);
    printf("Nhap gia tri moi tai vi tri do: ");
    scanf("%d", &val);
    if (pos >= 0 && pos < n) {
        a[pos] = val;
        printf("Mang sau khi cap nhat:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    } else {
        printf("Vi tri khong hop le.\n");
    }
    return 0;
}
