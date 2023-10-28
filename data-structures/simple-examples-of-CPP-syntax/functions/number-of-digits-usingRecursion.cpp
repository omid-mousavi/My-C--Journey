#include <iostream>
using namespace std;

int numOfDigits(int number) {
  if(number != 0) {
    return 1 + numOfDigits(number / 10);
  }
  return 0;
}
int main() {
  int number;
  cout << "Enter your number: ";
  cin >> number;
  cout << "Result: " << numOfDigits(number) << endl;
  return 0;
}