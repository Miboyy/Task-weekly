#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)
      return i;
  return -1;
}

int main() {
  int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
  int x = 111;
  int n = sizeof(arr) / sizeof(arr[0]);

  int result = linearSearch(arr, n, x);

  if(result == -1)
    cout << "Gak ada di Array";
  else
    cout << "Elemennya ada di urutan " << result;
  
  return 0;
}