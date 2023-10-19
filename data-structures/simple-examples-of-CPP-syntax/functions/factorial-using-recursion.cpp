#include <iostream>
using namespace std;

int fact(int number) {
  if(number != 1) {
    return number * fact(number-1);
  }
  return 1;
}
int main() {
  int yourNumber;
  cout << "Enter your number: ";
  cin >> yourNumber;
  cout << "The result is " << fact(yourNumber);
  return 0;
}