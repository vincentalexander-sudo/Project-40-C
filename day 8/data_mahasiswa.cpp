#include <stdio.h>

struct Mahasiswa {
    char nama[50];
    char nim[20];
    float ipk;
};

int main() {
    struct Mahasiswa mhs1;

    printf("Nama Mahasiswa: ");
    scanf(" %[^\n]s", mhs1.nama);
    printf("NIM: ");
    scanf("%s", mhs1.nim);
    printf("IPK: ");
    scanf("%f", &mhs1.ipk);

    printf("Nama: %s\n", mhs1.nama);
    printf("NIM: %s\n", mhs1.nim);
    printf("IPK: %.2f\n", mhs1.ipk);
    return 0;
}