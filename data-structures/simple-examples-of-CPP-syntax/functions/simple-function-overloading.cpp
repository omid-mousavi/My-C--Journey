#include <iostream>
using namespace std;

void outputResult(string name) {
  cout << "Your name is " << name << endl;
}
void outputResult(int number, int two = 2/*default parameter value, in case that user doesnt provide argument*/) {
  cout << number * two << endl;
}
/*
 To overload functions, you need to have different parameter data types.
*/
int main() {
  outputResult("Omid");
  return 0;
}