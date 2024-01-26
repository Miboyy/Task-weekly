#include <iostream>
#include <climits>

const int SIZE = 7; 

int Element(int arr[], int n) {
    int first = INT_MIN; 
    int second = INT_MIN; 
    int third = INT_MIN; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    return third;
}

int main() {
    int arr[SIZE] = {10, 5, 8, 15, 3, 20, 1 };

    int thirdLargest = Element(arr, SIZE);

    std::cout << "Elemen ke-3 terbesar dalam array adalah: " << thirdLargest << std::endl;

    return 0;
}