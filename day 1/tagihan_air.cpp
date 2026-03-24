#include <stdio.h>

void hitungTagihan(int bulanIni, int bulanLalu, int *jumlahPemakaian, int *tagihan) {
    if (bulanLalu > bulanIni) {
        *jumlahPemakaian = (10000 - bulanLalu) + bulanIni;
    } else {
        *jumlahPemakaian = bulanIni - bulanLalu;
    }

    if (*jumlahPemakaian >= 0 && *jumlahPemakaian <= 100) {
        *tagihan = 200000;
    } else if (*jumlahPemakaian >= 101 && *jumlahPemakaian <= 300) {
        *tagihan = 200000 + (*jumlahPemakaian - 100) * 2500;
    } else {
        *tagihan = 500000 + (*jumlahPemakaian - 300) * 3000;
    }
}

void cetakSlipTagihan(int jumlahPemakaian, int tagihan, char nama[]) {
    printf("\n--- SLIP TAGIHAN ---\n");
    printf("Nama Pelanggan  : %s\n", nama);
    printf("Jumlah Pemakaian: %d\n", jumlahPemakaian);
    printf("Total Tagihan   : Rp %d\n", tagihan);
}

int main() {
    int bulanIni, bulanLalu, jumlahPemakaian, tagihan;
    char nama[50]; 

    printf("Nama Pelanggan: ");
    scanf("%s", nama); 

    printf("Angka Meteran Bulan Lalu: "); 
    scanf("%d", &bulanLalu);

    printf("Angka Meteran Bulan Ini : "); 
    scanf("%d", &bulanIni);

    hitungTagihan(bulanIni, bulanLalu, &jumlahPemakaian, &tagihan);
    cetakSlipTagihan(jumlahPemakaian, tagihan, nama);

    return 0;
}