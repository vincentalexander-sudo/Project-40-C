#include <stdio.h>

int main() {
    float jari_jari, luas, keliling;
    const float phi = 3.14;
    
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);

    luas = phi * jari_jari * jari_jari;
    keliling = 2 * phi * jari_jari;

    printf("Luas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f", keliling);
    return 0;
}