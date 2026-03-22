#include <stdio.h>

int main(){
    int n, x, pengurangan;
    int hasilAtas = 1, hasilBawah = 1, angkaKurang = 1;
    int binomial, bawah;
    printf("masukkan nilai n: ");
    scanf("%d", &n);
    printf("masukkan nilai x: ");
    scanf("%d", &x);
    pengurangan = n - x;
    
    for(int i = 1; i<=n; i++){
        hasilAtas *= i;
    }

    for (int j = 1; j <= x; j++){
        hasilBawah *= j;
    }

    for (int k = 1; k <= pengurangan; k++){
        angkaKurang *= k;
    }
    
    bawah = hasilBawah * angkaKurang;
    binomial = hasilAtas / bawah;

    printf("hasil binomial: %d ", binomial);
    return 0;
}