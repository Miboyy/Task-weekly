#include <iostream>
using namespace std;

void selectionSort(int arr[], int x) {
  int i, j, min_idx;

  for (i = 0; i < x-1; i++) {
    min_idx = i;
    for (j = i+1; j < x; j++)
      if (arr[j] < arr[min_idx])
        min_idx = j;

    swap(arr[min_idx], arr[i]);
  }
}

void printArray(int arr[], int ukuran) {
  int i;
  for (i=0; i < ukuran; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int x = sizeof(arr)/sizeof(arr[0]);
  
  selectionSort(arr, x);
  
  cout << "Arraynya: \n";  
  printArray(arr, x);
}