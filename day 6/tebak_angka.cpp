#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tebakan, angka;

    srand(time(NULL));
    angka = (rand() % 100) + 1;

    do {
        printf("Masukkan tebakan: ");
        scanf("%d", &tebakan);

        if (tebakan > angka) {
            printf("Angka terlalu besar\n");
        } else if (tebakan < angka) {
            printf("Angka terlalu kecil\n");
        } else {
            printf("Tebakan benar! Angka yang benar adalah %d\n", angka);
        }
    } while (tebakan != angka);
    return 0;
}