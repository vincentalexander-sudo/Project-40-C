#include <stdio.h>

int main() {
    int x, y;
    printf("Masukkan koordinat x: ");
    scanf("%d", &x);
    printf("Masukkan koordinat y: ");
    scanf("%d", &y);
    
    if (x  > 0 && y > 0){
        printf("Koordinat (%d, %d) berada pada kuadran I", x, y);
    } else if (x < 0 && y > 0){
        printf("Koordinat (%d, %d) berada pada kuadran II", x, y);
    } else if (x < 0 && y < 0){
        printf("Koordinat (%d, %d) berada pada kuadran III", x, y);
    } else if (x > 0 && y < 0){
        printf("Koordinat (%d, %d) berada pada kuadran IV", x, y);
    } else if (x == 0 && y == 0){
        printf("Koordinat (%d, %d) berada pada titik pusat (origin)", x, y);
    } else if (x == 0 && y != 0){
        printf("Koordinat (%d, %d) berada pada sumbu y", x, y);
    } else if (x != 0 && y == 0){
        printf("Koordinat (%d, %d) berada pada sumbu x", x, y);
    }

    return 0;
}