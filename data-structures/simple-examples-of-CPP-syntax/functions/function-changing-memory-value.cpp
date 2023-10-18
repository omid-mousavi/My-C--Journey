#include <iostream>
using namespace std;
/*
The function below changes value of an variable using its memory location(pointer)
*/
void changeVal(string *name) {
  cout << "Enter your name: ";
  cin >> *name;
}
int main() {
  string name = "Guest";
  changeVal(&name);
  cout << "Welcome " << name;
  return 0;
}