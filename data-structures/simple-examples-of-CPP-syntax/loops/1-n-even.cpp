#include <iostream>
using namespace std;


int sumEven(int n) {
  int sum = 0;
  for(int i = 2; i <= n; i += 2) {
    sum += i;
  }
  return sum;
}
int main() {
  int n;
  cout << "Enter your number: ";
  cin >> n;
  cout << "Result is " << sumEven(n) << endl;
}