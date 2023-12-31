// Bubble sort in C++
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  // function to swap two elements
  int temp = a;
  a = b;
  b = temp;
}

void bubbleSort(int arr[], int n) {
  // loop to access each array element
  for (int i = 0; i < n - 1; i++)
    // loop to compare array elements
    for (int j = n - 1; j > i; j--)
      // compare two adjacent elements
      // change < to > to sort in descending order
      if (arr[j] < arr[j - 1])
        // swapping elements if elements
        // are not in the intended order
        swap(arr[j], arr[j - 1]);
}

void printArray(int arr[], int size) {
  // loop to print the array
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  // sample array
  int arr[] = {6, 4, 2, 10, 9, 3, 5, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  // call the bubble sort function
  bubbleSort(arr, n);
  cout << "Sorted array: \n";
  // print the sorted array
  printArray(arr, n);
  return 0;
}