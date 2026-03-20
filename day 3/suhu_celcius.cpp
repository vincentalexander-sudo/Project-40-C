#include <stdio.h>

int main() {
    float celcius, fahrenheit, reamur, kelvin;
    printf("Masukkan suhu dalam celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * (9.0/5.0)) + 32;
    reamur = (4.0/5.0) * celcius;
    kelvin = celcius + 273;
    printf("Suhu dalam fahrenheit adalah %.2f \n", fahrenheit);
    printf("Suhu dalam reamur adalah %.2f \n", reamur);
    printf("Suhu dalam kelvin adalah %.0f", kelvin);
    return 0;
}