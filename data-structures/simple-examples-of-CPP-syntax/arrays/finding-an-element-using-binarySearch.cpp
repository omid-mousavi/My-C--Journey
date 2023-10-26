#include <iostream>
using namespace std;


int binarySearch(int arr[], int n) {
  int first = 0/*cause array is zero indexed*/, last = (sizeof(arr) / sizeof(arr[0])) - 1; /*The sizeof operator in C++ is used to determine the size of variables, data types, and constants in bytes at compile time. In this example returns the size of the expression's type which similar to length in other languages*/
  while(first <= last) {
    int midPoint = (first + last) / 2;
    if(arr[midPoint] == n) {
      return midPoint;
    } else if(arr[midPoint] < n) {
      first = midPoint + 1;
    } else {
      last = midPoint - 1;
    }
  }
  return -1;
}
int main() {
  int ourArr[] = {1, 2, 3, 5, 6, 8, 10, 12}, n;
  cout << "What value you are looking for? ";
  cin >> n;
  cout << "Found: " << binarySearch(ourArr, n); // this will return the index of your target, otherwise -1.
  return 0;
}
/*
Binary search is a search algorithm that is faster than the linear search algorithm. 
Binary search is used to search the position of the target element in a sorted array by repeatedly dividing the search space in half. 
Binary search eliminates half portion of the array with each comparison. It works in a time complexity of O (log n) where n is the number of elements in the array.
* Binary search is worthless for an unordered list.
source: explanation made with Bing AI.
*/