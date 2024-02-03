#include <stdio.h>

void geser(int arr[], int leng, int k) {
    for (int j = 0; j < k; j++) {
        int sem = arr[leng - 1];
        for (int i = leng - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = sem;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int leng = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Masukkan jumlah geser: ");
    scanf("%d", &k);

    geser(arr, leng, k);

    printf("Array setelah digeser: ");
    for (int i = 0; i < leng; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}