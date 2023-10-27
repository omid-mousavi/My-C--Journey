#include <iostream>
using namespace std;

int fibonacci(int number) {
  int f_0 = 0, f_1 = 1;
  int num;
  for(int i = 1; i < number; i++) {
    num = f_0 + f_1;
    f_0 = f_1;
    f_1 = num;
  }
  return num;
}
int main() {
  int n;
  cout << "Enter your number: ";
  cin >> n;
  cout << "Result is: " << fibonacci(n) << endl;
  return 0;
}