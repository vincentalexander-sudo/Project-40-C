#include <stdio.h>

int main(){
    int n, x, pengurangan;
    int angka_faktorial_atas, angka_faktorial_bawah, angka_kurang;
    int binomial, bawah;
    printf("masukkan nilai n: ");
    scanf("%d", &n);
    printf("masukkan nilai x: ");
    scanf("%d", &x);
    pengurangan = n - x;
    angka_faktorial_atas = 1;
    angka_faktorial_bawah = 1;
    angka_kurang = 1;
    
    for(int i = 1; i<=n; i++){
        angka_faktorial_atas *= i;
    }
    for (int j = 1; j <= x; j++){
        angka_faktorial_bawah *= j;
    }
    for (int k = 1; k <= pengurangan; k++){
        angka_kurang *= k;
    }
    bawah = angka_faktorial_bawah * angka_kurang;
    binomial = angka_faktorial_atas / bawah;

    printf("hasil binomial: %d ", binomial);
    return 0;
}