#include <stdio.h>

int main() {
    int arr[] = {12, 45, 78, 23, 56};
    int cari;
    int ketemu = 0;

    printf("Cari angka: ");
    scanf("%d", &cari);

    for(int i = 0; i < 5; i++) {
        if(arr[i] == cari) {
            printf("Angka ditemukan pada indeks ke-%d\n", i);
            ketemu = 1;
            break;
        }
    }

    if(ketemu == 0) {
        printf("Angka tidak ditemukan\n");
    }

    return 0;
}