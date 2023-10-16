#include <iostream>
using namespace std;

int main() {
  int yourDay;
  cout << "Enter your number: ";
  cin >> yourDay;
  if(yourDay == 1) {
    cout << "Saturday" << endl;
  } else if(yourDay == 2) {
    cout << "Sunday" << endl;
  } else if(yourDay == 3) {
    cout << "Monday" << endl;
  } else if(yourDay == 4) {
    cout << "Tuesday" << endl;
  } else if(yourDay == 5) {
    cout << "Wednesday" << endl;
  } else if(yourDay == 6) {
    cout << "Thursday" << endl;
  } else if(yourDay == 7) {
    cout << "Friday" << endl;
  } else {
    cout << "Invalid number!" << endl;
  }
  return 0;
}