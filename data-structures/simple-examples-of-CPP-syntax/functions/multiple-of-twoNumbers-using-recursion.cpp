#include <iostream>
using namespace std;

int multi(int a, int b) {
  if(a == 0 || b == 0) {
    return 0;
  } else if(a == 1) {
    return b;
  } else if(b == 1) {
    return a;
  }
  if(b > 0) {
    return a + multi(a, b - 1);
  } else { // when b is less than 0(b < 0)
    return -a + multi(a, b + 1);
  } 
}
int main() {
  int firstNum, secondNum;
  cout << "Enter two numbers: ";
  cin >> firstNum >> secondNum;
  cout << "Result is: " << multi(firstNum, secondNum) << endl;
  return 0;
}