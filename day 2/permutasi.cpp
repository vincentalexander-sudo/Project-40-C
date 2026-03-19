#include <stdio.h>

int main() {
    int n,r,hasilBawah = 1, hasilAtas = 1;

    printf("Total angka: ");
    scanf("%d", &n);
    printf("Angka yang dipilih: ");
    scanf("%d", &r);

    if (r > n) {
        printf("r tidak boleh lebih besar dari n");
    }else {
        for (int i = n; i >= 1; i--) {
            hasilAtas *= i;
        }

        int selisih = n - r;
        for (int i = selisih; i >= 1; i--) {
            hasilBawah *= i;
        }

        int permutasi = hasilAtas / hasilBawah;
        printf("Permutasi: %d", permutasi);
    }
    return 0;
}