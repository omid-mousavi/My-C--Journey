#include <iostream>
using namespace std;

int sumNum(int a, int b) {
  if(b == 0) {
    return a;
  } else {
    return sumNum(a + 1, b - 1);
  }
}
int main() {
  int firstNum, secondNum;
  cout << "Enter your first and second number in order: ";
  cin >> firstNum >> secondNum;
  cout << "Result is: " << sumNum(firstNum, secondNum) << endl;
  return 0;
}