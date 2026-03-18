#include <stdio.h>

void perhitunganResistansi(float resistansi[5], float *seri, float *paralel) {
    *seri = 0;
    float totalParalel = 0;
    
    for (int i = 0; i < 5; i++) {
        *seri = *seri + resistansi[i];
        totalParalel = totalParalel + (1.0 / resistansi[i]);
    }
    *paralel = 1.0 / totalParalel;
}

int main() {
    float resistansi[5] = {10.1, 20.2, 30.3, 40.4, 50.5};
    float hasilSeri, hasilParalel;
    perhitunganResistansi(resistansi, &hasilSeri, &hasilParalel);

    printf("Resistansi seri: %.2f\n", hasilSeri);
    printf("Resistansi paralel: %.2f", hasilParalel);
    return 0;
}