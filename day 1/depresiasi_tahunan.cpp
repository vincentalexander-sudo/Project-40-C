#include <iostream>

float hitungDepresiasiTahunan (float nilaiAset, float lamaDepresiasi) {
    int hasil = nilaiAset / lamaDepresiasi;
    return hasil;
}

void tabelDepresiasi (int tahunSekarang, float nilaiAset, float lamaDepresiasi) {
    float sisaNilai = nilaiAset;
    float depresiasiTahunan = hitungDepresiasiTahunan(nilaiAset, lamaDepresiasi);
    for (int i = 0; i <= lamaDepresiasi; i++) {
        if (sisaNilai <= 0) {
            sisaNilai = 0;
        }

        printf("Tahun %d: %.2f\n", tahunSekarang + i, sisaNilai);

        if (sisaNilai <= 0) {
            break;
        }
        
        sisaNilai -= depresiasiTahunan;
    }
}

int main() {
    int tahunSekarang;
    float nilaiAset;
    float lamaDepresiasi;

    printf("Masukkan tahun sekarang: "); 
    scanf("%d", &tahunSekarang);
    printf("Masukkan nilai aset: "); 
    scanf("%f", &nilaiAset);
    printf("Masukkan lama depresiasi: "); 
    scanf("%f", &lamaDepresiasi);

    tabelDepresiasi(tahunSekarang, nilaiAset, lamaDepresiasi);
    return 0;
}