#include <stdio.h>

int main() {
    int x, y;
    printf("Masukkan angka x: ");
    scanf("%d", &x);

    printf("Masukkan angka y: ");
    scanf("%d", &y);

    for (int i = 1; i <= x; i++) {
        printf("%d ", y + (i * x));
    }
    printf("\n");
    return 0;
}