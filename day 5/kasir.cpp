#include <stdio.h>
int main() {
    char namaBarang[50];
    int jumlahBarang, hargaBarang;
    int subTotal, totalHarga;
    float diskon;

    printf("Masukkan nama barang: ");
    scanf("%[^\n]", namaBarang);
    printf("Masukkan jumlah barang: ");
    scanf("%d", &jumlahBarang);
    printf("Masukkan harga barang: ");
    scanf("%d", &hargaBarang);

    subTotal = jumlahBarang * hargaBarang;

    if (subTotal > 500000) {
        diskon = 0.15;
    } else if (subTotal > 100000) {
        diskon = 0.1;
    } else {
        diskon = 0;
    }

    totalHarga = subTotal - (subTotal * diskon);

    printf("\n--- Struk Pembayaran ---\n");
    printf("Nama Barang\t: %s\n", namaBarang);
    printf("Subtotal\t: %d\n", subTotal);
    printf("Diskon\t\t: %.0f%%\n", diskon * 100);
    printf("Total Harga\t: %d\n", totalHarga);
    return 0;
}