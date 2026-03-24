#include <stdio.h>

int main() {
    int arr[5];
    int max, min;

    for(int i = 0; i < 5; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Nilai Max: %d\n", max);
    printf("Nilai Min: %d\n", min);

    return 0;
}