function quickSort(arr) {
  if (arr.length <= 1) {
    return arr;
  }

  const pivot = arr[0];
  const left = [];
  const right = [];

  for (let i = 1; i < arr.length; i++) {
    arr[i] < pivot ? left.push(arr[i]) : right.push(arr[i]);
  }

  return quickSort(left).concat(pivot, quickSort(right));
}

// Merge Sort
function mergeSort(arr) {
  if (arr.length <= 1) {
    return arr;
  }

  const middle = Math.floor(arr.length / 2);
  const left = arr.slice(0, middle);
  const right = arr.slice(middle);

  return merge(mergeSort(left), mergeSort(right));
}

function merge(left, right) {
  let result = [];
  let leftIndex = 0;
  let rightIndex = 0;

  while (leftIndex < left.length && rightIndex < right.length) {
    if (left[leftIndex] < right[rightIndex]) {
      result.push(left[leftIndex]);
      leftIndex++;
    } else {
      result.push(right[rightIndex]);
      rightIndex++;
    }
  }

  return result.concat(left.slice(leftIndex)).concat(right.slice(rightIndex));
}

// Insertion Sort
function insertionSort(arr) {
  for (let i = 1; i < arr.length; i++) {
    let currentVal = arr[i];
    let j = i - 1;

    while (j >= 0 && arr[j] > currentVal) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = currentVal;
  }

  return arr;
}

// Array sebelum diurutkan
const unsortedArray = [5, 2, 9, 1, 5, 6];
console.log("Sebelum diurutkan:", unsortedArray);

// Menggunakan Quick Sort
const quickSortedArray = quickSort([...unsortedArray]);
console.log("Setelah diurutkan dengan Quick Sort:", quickSortedArray);

// Menggunakan Merge Sort
const mergeSortedArray = mergeSort([...unsortedArray]);
console.log("Setelah diurutkan dengan Merge Sort:", mergeSortedArray);

// Menggunakan Insertion Sort
const insertionSortedArray = insertionSort([...unsortedArray]);
console.log("Setelah diurutkan dengan Insertion Sort:", insertionSortedArray);
