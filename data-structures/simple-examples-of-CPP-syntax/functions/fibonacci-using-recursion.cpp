#include <iostream>
using namespace std;

int fibonacci(int n) {
  if(n == 1 || n == 2) { /* our stop point */
    return 1;
  } else {
    return (fibonacci(n - 1) + fibonacci(n - 2));
  }
}
int main() {
  int number;
  cout << "Enter your number: ";
  cin >> number;
  cout << "Result: " << fibonacci(number);
  return 0;
}