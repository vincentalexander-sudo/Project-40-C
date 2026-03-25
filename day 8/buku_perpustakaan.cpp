#include <stdio.h>

struct Buku {
    char judul[50];
    char pengarang[50];
    int tahun;
};

int main() {
    struct Buku b1;

    printf("Judul Buku: ");
    scanf(" %[^\n]s", b1.judul);
    printf("Pengarang: ");
    scanf(" %[^\n]s", b1.pengarang);
    printf("Tahun Terbit: ");
    scanf("%d", &b1.tahun);

    printf("Judul Buku: %s\n", b1.judul);
    printf("Pengarang: %s\n", b1.pengarang);
    printf("Tahun: %d\n", b1.tahun);
    return 0;
}