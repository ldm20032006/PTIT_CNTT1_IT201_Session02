#include <stdio.h>
int main() {
    int a[100], n, k;
    int found = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap so nguyen k: ");
    scanf("%d", &k);
    for (int i = 0; i < n - 1 && !found; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                printf("%d,%d\n", a[i], a[j]);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("Khong tim thay\n");
    }
    return 0;
}
