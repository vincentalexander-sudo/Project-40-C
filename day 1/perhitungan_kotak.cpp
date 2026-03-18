#include <stdio.h>

void perhitunganKotak (int panjang, int lebar, int tinggi, int &keliling, int &luasPermukaan, int &volume) {
    keliling = 4 * (panjang + lebar + tinggi);
    luasPermukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
    volume = panjang * lebar * tinggi;
}

int main() {
    int panjang, lebar, tinggi;
    printf("Masukkan Nilai Panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan Nilai Lebar: ");
    scanf("%d", &lebar);
    printf("Masukkan Nilai Tinggi: ");
    scanf("%d", &tinggi);

    int keliling, luasPermukaan, volume;
    perhitunganKotak(panjang, lebar, tinggi, keliling, luasPermukaan, volume);

    printf("Keliling: %d\n", keliling);
    printf("Luas Permukaan: %d\n", luasPermukaan);
    printf("Volume: %d", volume);
    return 0;
}