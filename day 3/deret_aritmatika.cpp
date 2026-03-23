#include <stdio.h>

int main() {
    int x, y, sukuSaatIni;
    int total = 0;
    printf("Masukkan angka x: ");
    scanf("%d", &x);

    printf("Masukkan angka y: ");
    scanf("%d", &y);

    for (int i = 1; i <= x; i++) {
        sukuSaatIni = y + (i * x);
        printf("%d ", sukuSaatIni );
        total += sukuSaatIni;
    }

    printf("\nTotal: %d", total);
    return 0;
}