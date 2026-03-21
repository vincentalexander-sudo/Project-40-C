#include <stdio.h>

float energiPotensial(float massa, float ketinggian, float gravitasi){
    return massa * gravitasi * ketinggian;
};

float energiKinetic(float massa, float kecepatan){
    return (1.0/2.0) * massa * kecepatan * kecepatan;
};


int main(){
    float massa, ketinggian, kecepatan;
    const float gravitasi = 9.8;
    float hasilEnergiKinetic, hasilEnergiPotensial;

    printf("Masukkan massa: "); 
    scanf("%f", &massa);
    printf("Masukkan ketinggian: "); 
    scanf("%f", &ketinggian);
    printf("Masukkan kecepatan: "); 
    scanf("%f", &kecepatan);

    hasilEnergiPotensial = energiPotensial(massa, ketinggian, gravitasi);
    hasilEnergiKinetic = energiKinetic(massa, kecepatan);
    
    printf("Energi potensial adalah %.2f\n", hasilEnergiPotensial);
    printf("Energi kinetik adalah %.2f", hasilEnergiKinetic);

    return 0;
}