#include <stdio.h>

int main() {
    int angka, pangkat, hasil = 1;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    printf("Masukkan pangkat: ");
    scanf("%d", &pangkat);

    for (int i = 1; i <= pangkat; i++) {
        hasil *= angka;
    }

    printf("%d^%d adalah %d", angka, pangkat, hasil);
    return 0;
}