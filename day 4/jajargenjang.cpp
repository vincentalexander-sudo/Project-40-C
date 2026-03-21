#include <stdio.h>

int perhitunganLuas(int alas, int tinggi, int sisiMiring){
    return alas * tinggi;
}

int perhitunganKeliling(int alas, int tinggi, int sisiMiring){
    return 2 * (alas + sisiMiring);
}

int main(){
    int alas, tinggi, sisiMiring;
    int hasilLuas, hasilKeliling;

    printf("Masukkan alas: "); 
    scanf("%d", &alas);
    printf("Masukkan tinggi: "); 
    scanf("%d", &tinggi);
    printf("Masukkan sisi miring: "); 
    scanf("%d", &sisiMiring);

    hasilLuas = perhitunganLuas(alas, tinggi, sisiMiring);
    hasilKeliling = perhitunganKeliling(alas, tinggi, sisiMiring);

    printf("Luas: %d\n", hasilLuas);
    printf("Keliling: %d", hasilKeliling);

    return 0;
}