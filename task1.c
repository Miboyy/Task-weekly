#include  <stdio.h>

int main () {
    int arr[] = {10, 10,10, 8, 20, 9, 7, 6, 20, 8};
    int leng = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < leng; i++){
        for(int j = i + 1; j < leng; j++){
            if(arr[i] == arr[j]) {
                printf("%d\t", arr[i]);
                break;
            }
        }
    } 
    return 0;
}