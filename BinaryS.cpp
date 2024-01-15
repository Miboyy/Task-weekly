// Binary Search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
  while (l <= r) {
    int m = l + (r - l) / 2;

    if (arr[m] == x)
      return m;

    if (arr[m] < x)
      l = m + 1;

    else
      r = m - 1;
  }
  return -1;
}

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);

  int x = 10;

  int result = binarySearch(arr, 0, n - 1, x);

  if (result == -1)
    cout << "Gak ada di Array";
  else
    cout << "Elemennya ada di urutan " << result;

  return 0;
}