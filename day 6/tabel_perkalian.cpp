#include <stdio.h>

int main() {
    int batas;

    printf("Masukkan batas perkalian: ");
    scanf("%d", &batas);

    printf("==============\n");
    for (int i = 1; i <= batas; i++) {
        for (int j = 1; j <= batas; j++) {
            printf("%d X %d = %d \n",i, j ,i * j);
        }
        printf("==============\n");
    }
    return 0;
}