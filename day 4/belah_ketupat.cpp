#include <stdio.h>

float luasBelahKetupat(float diagonal1, float diagonal2) {
    return (1.0 / 2.0) * diagonal1 * diagonal2;
}

float kelilingBelahKetupat(float sisi) {
    return 4.0 * sisi;
}

int main() {
    float diagonal1, diagonal2, sisi;
    float hasilLuas, hasilKeliling;

    printf("Masukkan diagonal 1: ");
    scanf("%f", &diagonal1);
    printf("Masukkan diagonal 2: ");
    scanf("%f", &diagonal2);
    printf("Masukkan sisi: ");
    scanf("%f", &sisi);

    hasilLuas = luasBelahKetupat(diagonal1, diagonal2);
    hasilKeliling = kelilingBelahKetupat(sisi);

    printf("Luas belah ketupat adalah %.2f\n", hasilLuas);
    printf("Keliling belah ketupat adalah %.2f", hasilKeliling);
    return 0;
}