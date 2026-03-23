#include <stdio.h>

int main() {
    int jumlahBarang, hargaBarang;
    int totalHarga = 0;

    while (1) {
        printf("Masukkan harga barang: ");
        scanf("%d", &hargaBarang);

        if (hargaBarang == 0) {
            break;
        }
        
        printf("Masukkan jumlah barang: ");
        scanf("%d", &jumlahBarang);

        totalHarga += hargaBarang * jumlahBarang;
    }

    printf("Total belanja: %d\n", totalHarga);
    return 0;
}