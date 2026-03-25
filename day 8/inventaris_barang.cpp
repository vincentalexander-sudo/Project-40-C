#include <stdio.h>

struct Barang {
    char nama[50];
    int harga;
    int stok;
};

int main() {
    int jumlahBarang;

    printf("Masukkan jumlah barang: ");
    scanf("%d", &jumlahBarang);

    struct Barang arrBarang[jumlahBarang];

    for(int i = 0; i < jumlahBarang; i++) {
        printf("Nama Barang ke-%d: ", i+1);
        scanf(" %[^\n]s", arrBarang[i].nama);
        printf("Harga: ");
        scanf("%d", &arrBarang[i].harga);
        printf("Stok: ");
        scanf("%d", &arrBarang[i].stok);
    }

    for(int i = 0; i < jumlahBarang; i++) {
        printf("%d. %s - Harga: %d - Stok: %d\n", i+1, arrBarang[i].nama, arrBarang[i].harga, arrBarang[i].stok);
    }
    return 0;
}