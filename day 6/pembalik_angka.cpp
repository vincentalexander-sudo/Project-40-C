#include <stdio.h>

int main() {
    int angkaAwal,sisaBagi;
    float angkaTerbalik = 0;

    printf("Masukkan angka: ");
    scanf("%d", &angkaAwal);

    while (angkaAwal != 0) {
        sisaBagi = angkaAwal % 10;
        angkaTerbalik = angkaTerbalik * 10 + sisaBagi;
        angkaAwal /= 10;
    }

    printf("Angka terbalik: %.0f", angkaTerbalik);
    return 0;
}