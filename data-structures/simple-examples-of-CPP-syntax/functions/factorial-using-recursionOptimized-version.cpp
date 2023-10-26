#include <iostream>
using namespace std;

int fact(int number) {
  if(number == 0) {
    return 1;
  } else {
    return number * fact(number - 1);
  }
}
int main() {
  int yourNum;
  cout << "Enter your number: ";
  cin >> yourNum;
  cout << "Result is " << fact(yourNum);
  return 0;
}