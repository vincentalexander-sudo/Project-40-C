#include <stdio.h>

int main() {
    int arr[5];
    int jumlah = 0;

    for(int i = 0; i < 5; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
        jumlah += arr[i];
    }

    printf("Jumlah Array: %d\n", jumlah);
    return 0;
}