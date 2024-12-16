#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap vào mot so nguyên duong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui lòng nhap so nguyên duong.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("Tong các so tu 1 den %d là: %d\n", n, sum);
    }

    return 0;
}

