#include <stdio.h>
#include <math.h>

float kelilingSegitiga(float sisiA, float sisiB, float sisiC) {
    return sisiA + sisiB + sisiC;
}

float luasSegitiga(float sisiA, float sisiB, float sisiC) {
    float semiperimter = (kelilingSegitiga(sisiA, sisiB, sisiC)) / 2;
    return sqrt(semiperimter * (semiperimter - sisiA) * (semiperimter - sisiB) * (semiperimter - sisiC));
}

int main() {
    float sisiA, sisiB, sisiC;
    float hasilkeliling, hasilLuas;

    printf("Masukkan sisi A: ");
    scanf("%f", &sisiA);
    printf("Masukkan sisi B: ");
    scanf("%f", &sisiB);
    printf("Masukkan sisi C: ");
    scanf("%f", &sisiC);

    hasilkeliling = kelilingSegitiga(sisiA, sisiB, sisiC);
    hasilLuas = luasSegitiga(sisiA, sisiB, sisiC);

    printf("Keliling segitiga adalah %.2f\n", hasilkeliling);
    printf("Luas segitiga adalah %.2f", hasilLuas);
    return 0;
}