#include <stdio.h>

int main() {
    int angka, jumlah = 1;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    for (int i = 1; i < angka; i++) {
        if (angka % i == 0) {
            jumlah++;
        }
    }

    if (jumlah == 2) {
        printf("%d adalah bilangan prima", angka);
    } else {
        printf("%d bukan bilangan prima", angka);
    }

    return 0;
}