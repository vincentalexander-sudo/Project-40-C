#include <stdio.h>

void perhitunganData (float data[], int &range, float &nilaiRataRata) {
    int terbesar = data[0];
    int terkecil = data[0];
    float total = 0;

    for (int i = 0; i < 5; i++) {
        if (data[i] > terbesar) {
            terbesar = data[i];
        }
        if (data[i] < terkecil) {
            terkecil = data[i];
        }

        total = total + data[i];
    }
    range = terbesar - terkecil;
    nilaiRataRata = total / 5;
}

int main() {
    float data[5] = {10,20,30,40,60};
    int hasilRange;
    float hasilRataRata;

    perhitunganData(data, hasilRange, hasilRataRata);

    printf("Range: ", hasilRange);
    printf("Nilai Rata-Rata: ", hasilRataRata);
    return 0;
}