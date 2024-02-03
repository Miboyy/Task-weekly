#include <stdio.h>
int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int leng = sizeof(arr) / sizeof(arr[0]);
    int in;
    
    printf("Lebokno angka sesuai hati nurani: ");
    scanf("%d", &in);

    for(int i = 0; i < leng; i++) {
        for(int j = i + 1; j < leng; j++){
            if(arr[i] + arr[j] == in){
                printf("hasile %d + %d \n", arr[i], arr[j]);
            }
        }

    }
    return 0;
}