#include <stdio.h>

struct Pegawai {
    char nama[50];
    int gajiPokok;
    int tunjangan;
};

int main() {
    struct Pegawai p1;
    int totalGaji;

    printf("Nama Pegawai: ");
    scanf(" %[^\n]s", p1.nama);
    printf("Gaji Pokok: ");
    scanf("%d", &p1.gajiPokok);
    printf("Tunjangan: ");
    scanf("%d", &p1.tunjangan);

    totalGaji = p1.gajiPokok + p1.tunjangan;

    printf("Nama: %s\n", p1.nama);
    printf("Total Gaji: Rp %d\n", totalGaji);
    return 0;
}