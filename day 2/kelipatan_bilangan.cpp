#include <stdio.h>

int main() {
    int angka, batas;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    printf("Masukkan batas kelipatan: ");
    scanf("%d", &batas);

    for (int i = 1; i <= batas; i++) {
        printf("kelipatan bilangan %d: %d\n", angka, i * angka);
    }
}