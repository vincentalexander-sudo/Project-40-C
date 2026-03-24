#include <stdio.h>

int main() {
    int jumlahBarang;

    printf("Masukkan jumlah barang: ");
    scanf("%d", &jumlahBarang);

    int harga[jumlahBarang];
    int jumlah[jumlahBarang];
    int subTotal[jumlahBarang];
    int totalBelanja = 0;

    for(int i = 0; i < jumlahBarang; i++) {
        printf("Harga barang ke-%d: ", i + 1);
        scanf("%d", &harga[i]);
        printf("Jumlah barang ke-%d: ", i + 1);
        scanf("%d", &jumlah[i]);
        
        subTotal[i] = harga[i] * jumlah[i];
        totalBelanja += subTotal[i];
    }

    printf("\n--- STRUK BELANJA ---\n");
    for(int i = 0; i < jumlahBarang; i++) {
        printf("Barang %d: Rp.%d - %d = %d\n", i + 1, harga[i], jumlah[i], subTotal[i]);
    }
    printf("---------------------\n");
    printf("Grand Total: %d\n", totalBelanja);

    return 0;
}