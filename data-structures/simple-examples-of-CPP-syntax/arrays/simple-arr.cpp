#include <iostream>
using namespace std;

int main() {
  double marks[5], sum = 0; // an array with 5 elements
  int i;
  for(i = 0; i < 5; i++) {
    cout << "Enter your mark: ";
    cin >> marks[i];
    sum += marks[i];
  }
  cout << "Your average is " << sum / i << endl;
  return 0;
}