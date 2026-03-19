#include <stdio.h>

int main() {
    int angka, faktorial = 1;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    for (int i = angka; i >= 1; i--) {
        faktorial *= i;
    }

    printf("Faktorial %d! adalah %d", angka, faktorial);
    return 0;
}