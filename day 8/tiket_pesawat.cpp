#include <stdio.h>
#include <string.h>

struct Tiket {
    char maskapai[50];
    char tujuan[50];
    char namaPenumpang[50];
    int nomorKursi;
};

int main() {
    struct Tiket t1;

    strcpy(t1.maskapai, "Garuda Indonesia");

    printf("Nama Penumpang: ");
    scanf(" %[^\n]s", t1.namaPenumpang);
    printf("Kota Tujuan: ");
    scanf(" %[^\n]s", t1.tujuan);
    printf("Nomor Kursi: ");
    scanf("%d", &t1.nomorKursi);

    printf("Maskapai : %s\n", t1.maskapai);
    printf("Penumpang: %s\n", t1.namaPenumpang);
    printf("Tujuan   : %s\n", t1.tujuan);
    printf("Kursi    : %d\n", t1.nomorKursi);
    return 0;
}