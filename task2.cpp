#include <iostream>
#include <algorithm>

const int ukuran = 7; 

void elemen(int arr[], int n) {
    std::sort(arr, arr + n, std::greater<int>());

    
    std::cout << "Tiga elemen terbesar dalam array adalah: ";
    for (int i = 0; i < 3; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int arr[ukuran] = {100, 5, 8, 25, 3, 20, 112};

    elemen(arr, ukuran);

    return 0;
}