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

    struct Barang arrayBarang[jumlahBarang];

    for(int i = 0; i < jumlahBarang; i++) {
        printf("Nama Barang ke-%d: ", i+1);
        scanf(" %[^\n]s", arrayBarang[i].nama);
        printf("Harga: ");
        scanf("%d", &arrayBarang[i].harga);
        printf("Stok: ");
        scanf("%d", &arrayBarang[i].stok);
    }

    for(int i = 0; i < jumlahBarang; i++) {
        printf("%d. %s - Harga: %d - Stok: %d\n", i+1, arrayBarang[i].nama, arrayBarang[i].harga, arrayBarang[i].stok);
    }
    return 0;
}