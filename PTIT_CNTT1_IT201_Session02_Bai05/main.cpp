#include <stdio.h>

int main() {
    int n, a[100], pos;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap vi tri muon xoa (0-%d): ", n - 1);
    scanf("%d", &pos);

    if (pos >= 0 && pos < n) {
        // Dời các phần tử phía sau lên trước
        int i;
        for (i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;

        printf("Mang sau khi xoa:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    } else {
        printf("Khong hop le\n");
    }

    return 0;
}
