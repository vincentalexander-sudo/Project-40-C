#include <stdio.h>

float luasTrapesium(float alasAtas, float alasBawah, float tinggi) {
    return (1.0 / 2.0) * (alasAtas + alasBawah) * tinggi;
}

float kelilingTrapesium(float alasAtas, float alasBawah, float sisiMiring) {
    return (alasAtas + alasBawah) + (2 * sisiMiring);
}

int main() {
    float alasAtas, alasBawah, tinggi, sisiMiring;
    float hasilLuas, hasilKeliling;

    printf("Masukkan alas atas: ");
    scanf("%f", &alasAtas);
    printf("Masukkan alas bawah: ");
    scanf("%f", &alasBawah);
    printf("Masukkan tinggi: ");
    scanf("%f", &tinggi);
    printf("Masukkan sisi miring: ");
    scanf("%f", &sisiMiring);

    hasilLuas= luasTrapesium(alasAtas, alasBawah, tinggi);
    hasilKeliling = kelilingTrapesium(alasAtas, alasBawah, sisiMiring);

    printf("Luas trapesium adalah %.2f\n", hasilLuas);
    printf("Keliling trapesium adalah %.2f", hasilKeliling);
    return 0;
}