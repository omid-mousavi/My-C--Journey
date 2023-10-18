#include <iostream>
using namespace std;

int main() {
  int i = 0;
  for(i = 0/*is executed (one time) before the execution of the code block.*/; i < 5/*defines the condition for executing the code block.*/; i++/*is executed (every time) after the code block has been executed.*/) {
    cout << "Hello World" << endl; // this for loop runs code for 5 times
  }
}