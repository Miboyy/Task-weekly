#include <iostream>

int main() {
    const int ukuran = 6; 
    int arr[ukuran] = {1, 2, 3, 4, 5};

    
    for (int i = ukuran- 1; i >= 0; i--) {
        std::cout << arr[i] << "";
    }

    return 0;
}