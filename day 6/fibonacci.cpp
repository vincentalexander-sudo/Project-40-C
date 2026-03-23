#include <stdio.h>

int main() {
    int n, fn;
    int f1 = 0, f2 = 1;

    printf("Masukkan jumlah angka yang mau ditampilkan: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", f1);
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return 0;
}