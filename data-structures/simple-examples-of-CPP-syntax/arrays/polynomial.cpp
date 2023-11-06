#include <iostream>
using namespace std;

int main() {
  /*
  the polynomial is 2x^3 + 4x^2 + x - 5.
  the index is power(^) and their coefficient is their actual value
  */
  int array[4] = {-5, 1, 4, 2};
  int lastIndex = sizeof(array) / sizeof(array[0]);
  for(int i = 0; i < lastIndex; i++) {
    if(i != lastIndex -1) {
      cout << array[i] << "x^" << i << " + ";
    } else {
      cout << array[i] << "x^" << i;
    }
  }
  return 0;
}