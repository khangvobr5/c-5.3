#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap v�o mot so nguy�n duong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui l�ng nhap so nguy�n duong.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("Tong c�c so tu 1 den %d l�: %d\n", n, sum);
    }

    return 0;
}

