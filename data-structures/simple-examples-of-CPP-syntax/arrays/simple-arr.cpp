#include <iostream>
using namespace std;

int main() {
  double marks[5], sum = 0; // an array with 5 elements
  int i, x = 0;
  for(i = 0; i < 5; i++) {
    cout << "Enter your mark: ";
    cin >> marks[i];
    sum += marks[i];
    x++;
  }
  cout << "Your average is " << sum / x << endl;
  return 0;
}