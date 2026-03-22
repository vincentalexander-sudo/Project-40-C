#include <stdio.h>
int main() {
    int pilihan;

    printf("=== MENU RUMAH MAKAN ===\n");
    printf("1. Nasi Goreng Spesial (Rp 25.000)\n");
    printf("2. Mie Ayam Bakso      (Rp 20.000)\n");
    printf("3. Es Teh Manis        (Rp 5.000)\n");
    printf("4. Es Jeruk            (Rp 7.000)\n");
    printf("========================\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pilihan);

    switch (pilihan){
        case 1:
            printf("Anda memilih Nasi Goreng Spesial (Rp 25.000)\n");
            break;
        case 2:
            printf("Anda memilih Mie Ayam Bakso (Rp 20.000)\n");
            break;
        case 3:
            printf("Anda memilih Es Teh Manis (Rp 5.000)\n");
            break;
        case 4:
            printf("Anda memilih Es Jeruk (Rp 7.000)\n");
            break;
        default:
            printf("Pilihan tidak valid\n");
    }
    
    return 0;
}